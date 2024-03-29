#include <stdio.h>
#include <stdlib.h>

int gcd( int a, int b ){
  if( a < b ) return gcd( b, a );
  if( b == 0 ) return a;
  return gcd( b, a % b );
}

int main(void){
  int a, b;
  scanf("%d %d", &a, &b );
  printf("%d\n", gcd( a, b ) );
  return 0;
}
