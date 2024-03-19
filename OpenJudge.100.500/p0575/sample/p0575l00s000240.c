#include<stdio.h>

int main(void) {
  int X, A;
  scanf("%d %d", &X, &A);
  if(X<A) {
    puts("0");
  }
  else {
    puts("1");
  }
  return 0;
}
