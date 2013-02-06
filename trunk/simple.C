#include <stdio.h>

//global int not modifiable
const int n = 1000;

//global int modifiable
int y = 1000;

int main (int argc, char** argv) {
//local int modifiable
  int r = 10;

  return 0;
}
