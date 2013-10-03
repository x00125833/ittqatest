#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  int practical = atoi(argv[0]);
  int exam = atoi(argv[1]);
  char grade[100] = "Fail"; 
    if (exam < 40 && practical < 40) {
      fprintf(stderr,"fail\n");  
    } else {
      int combined = (60*exam+40*practical)/100; 
      if (combined < 50) {
        fprintf(stderr,"fail\n");  
      } else if (combined >= 50 && combined < 80) {
        fprintf(stderr,"Pass\n");  
      } else if (combined >= 80 && combined < 100) {
        fprintf(stderr,"Pass with distinction\n");  
      }
    }
  return 0;
}
