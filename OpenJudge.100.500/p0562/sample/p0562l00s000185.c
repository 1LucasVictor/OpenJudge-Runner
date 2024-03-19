#include<stdio.h>

int main(void) {
  int a, b;
  int i = 0;
  scanf("%d %d", &a, &b);
  for ( i; ; i++ ) {
    if ( i >= ((double)(b-1) / (a-1)) ) { break; }
  }
  printf("%d\n", i);
  return 0;
}