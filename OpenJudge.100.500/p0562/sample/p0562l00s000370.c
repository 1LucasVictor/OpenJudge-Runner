#include<stdio.h>

int main(void) {
  int a, b;
  int i = 1;
  scanf("%d %d", &a, &b);
  for ( i; ; i++ ) {
    if ( i * (a-1) >= (b-1) ) { break; }
  }
  printf("%d\n", i);
  return 0;
}