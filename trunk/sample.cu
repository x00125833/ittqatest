struct cuBCData {
    int* distances;      // size n
    int* numSPs;         // size n
    bool* predecessor;   // size 2m
    float* dependencies; // size n
    float* nodeBCs;      // size n
};

/*
 * global data structure across all blocks
 */
struct cuGraph {
    int* froms; // size 2m
    int* nhbrs; // size 2m
};

__global__ void edge_bc_bfs(int nedges, cuGraph* cuGlobalGraph, cuBCData* bcd) {
  
  __shared__ bool done;
  
  if(threadIdx.x == 0){
    done = true;
  }

  int d = 0;

  while (!done) {
    __syncthreads();
    done = true;        //not sure what this does
    d++;                //are all threads executing these statements?
    __syncthreads();

    for (int eid = threadIdx.x; eid < 2 * nedges; eid += blockDim.x) {
      int from = cuGlobalGraph->froms[eid];
      if (bcd->distances[from] == d) {
        int nhbr = cuGlobalGraph->nhbrs[eid];
        int nhbr_dist = bcd->distances[nhbr];
        if (nhbr_dist == -1) {
          bcd->distances[nhbr] = nhbr_dist = d + 1;
          done = false;
        } else if (nhbr_dist < d) {
          bcd->predecessor[eid] = true;
        }
        if (nhbr_dist == d + 1) {
          atomicAdd(&bcd->numSPs[nhbr], bcd->numSPs[from]);
        }
      }
      __syncthreads();
    }
  }
}
  