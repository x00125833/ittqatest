#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double d = 0.0;
    long l = 0;
    time_t curtime;

    FILE *fptr = fopen("log.dat", "w");

    while(1) {
      time(&curtime);
      fprintf(fptr, "Transaction received @ %s\n", ctime(&curtime));
      for(int j = 0; j < 10000; j++) {
        for(int i = 0; i < 10000; i++)
          d +=  (i * (double) sqrt(i+99/99));
      }
      time(&curtime);
      fprintf(fptr, "Transaction processed @ %s ---> Result Computed %d\n", ctime(&curtime), rand() % 900);
      fflush(fptr);
    }
    return 0;
}

