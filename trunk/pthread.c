#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS     5

void *PrintHello(void *threadid);

void *PrintHello(void *threadid)
{
   long tid = (long)threadid;
   printf("In PrintHello(): Hello World! It's me, thread #%ld!\n", tid);
   pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
   pthread_t threads[NUM_THREADS];

   for(int t = 0; t < NUM_THREADS; t++){
      printf("In main(): creating thread %d\n", t);
      int rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
      if (rc){
         printf("ERROR; return code from pthread_create() is %d\n", rc);
      }
   }

   /* Last thing that main() should do */
   pthread_exit(NULL);
}
