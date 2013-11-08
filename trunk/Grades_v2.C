#include <stdio.h>
#include <stdlib.h>

/*
 * Grades.C
 * Subversion demo
 * Authentication example
 */
int main(int argc, char** argv) {
  int practical = atoi(argv[1]);
  int exam = atoi(argv[2]);
  char grade[100] = "Invalid Input"; 
    if (exam < 40 && practical < 40) {
      fprintf(stderr,"Fail\n");  
    } else {
      int combined = (60*exam+40*practical)/100; 
      if (combined < 50) {
        fprintf(stderr,"Component Fail\n");  
      } else if (combined >= 50 && combined < 80) {
        fprintf(stderr,"Pass\n");  
      } else if (combined >= 80 && combined <= 100) {
        fprintf(stderr,"Pass with distinction\n");  
      } else {
        fprintf(stderr,"Invalid Input\n");  
      }
    }
  return 1;
}
