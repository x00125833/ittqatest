#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <time.h>

int main (int argc, char **argv){

  const int z = 100;
  char array[z + 2];

  FILE* fptr = fopen("./log.dat", "w");

  while(1){
  for(int i = 0; i < z; i++){
    for(int x = 0; x < 100000; x++){
      char r = rand() % 26 + 'a';
      array[i] = r;
    }
  }
  array[z] = '\0';
  array[z+1] = '\n';
  time_t timer = time(NULL);
  fprintf(fptr, "Timestamp: %s Data: ",  ctime(&timer));
  fwrite(array, sizeof(char), z+2, fptr);
  usleep(200);
  }

  return 0;
}
