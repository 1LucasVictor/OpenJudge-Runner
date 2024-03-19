#include <stdio.h>

int main(void) {
  int a;
  int b;
  int result;
  
  result = (a * b) % 2;
  if (result == 0) {
    printf("Even");
  }
  else {
    printf("Odd");
  }
  return 0;
}