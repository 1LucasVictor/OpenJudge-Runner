//abc151E
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  int n;
  scanf(" %d", &n);

  while(n > 0){
    if(n % 10 == 7){
      printf("Yes");
      return 0;
    }
    n/=10;
  }
  printf("No");
  return 0;
}