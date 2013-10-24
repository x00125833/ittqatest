#include <stdio.h>
#include <stdlib.h>

/*
 * Grades.C
 */
int main(int argc, char** argv) {
  int practical = atoi(argv[1]);
  int exam = atoi(argv[2]);
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
  return 1;
}
