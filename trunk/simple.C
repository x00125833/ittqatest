#include <stdio.h>

const int n = 1000;

void populateData(int* dataarray, int sz);

int main (int argc, char** argv) {

  int intarray[n];

  populateData(intarray, n);

  return 0;
}

void populateData(int* dataarray, int sz){
  for(int i = 0; i < sz; i++){
    dataarray[i] = i;
  }
  float i = 0.95;
}
