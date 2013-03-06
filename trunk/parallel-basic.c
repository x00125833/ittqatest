#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void computeOne(int array[], const int sz);
void computeTwo(int array[], const int sz);
void computeThree(int array[], const int sz);

float sumRes = 0.0;
const int offset = 100;

int main (int argc, char **argv) {
  const int r = 16; 
  int* array = (int* ) malloc(sizeof(int) * r);

  computeOne(array, r);
  computeTwo(array, r);
  computeThree(array, r);

  free(array);

  return 0;
}

void computeOne(int array[], const int sz){
  int i = rand() % 365;
  fprintf(stderr, "rand is %d\n", i);

  for(int r = 0; r < sz; r++){
    array[r] -= i;
    array[r] = (array[r] < 0) ? array[r] * -1 : array[r];
    fprintf(stderr, "array compute 1: %d\n", array[r]);
  }
}


void computeTwo(int array[], const int sz){
  for(int r = 0; r < sz; r++){
    array[r] += offset; 
    fprintf(stderr, "array compute 2: %d\n", array[r]);
  }
}

void computeThree(int array[], const int sz){
  for(int r = 0; r < sz; r++){
    sumRes += (float) sqrt((float) array[r]);
    fprintf(stderr, "sumRes %f\n", sumRes);
  }
}

