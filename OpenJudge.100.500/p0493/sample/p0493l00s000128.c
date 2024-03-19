#include <stdio.h>
int main () {
  long int X;
  scanf("%ld",&X);
  long int happy;
  happy = 1000 * (X/500);
  X = X % 500;
  happy = happy + 5 * (X/5);
  printf("%ld",happy);
  return 0;
}

  