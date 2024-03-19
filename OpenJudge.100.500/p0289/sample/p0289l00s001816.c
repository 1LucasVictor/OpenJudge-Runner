#include <stdio.h>

int SearchGcd(int, int); // 最大公約数を求める関数


int main() {
  int x, y;

  scanf( "%d" , &x );
  scanf( "%d" , &y );
  printf( "%d\n" , SearchGcd(x, y) );
  
  return 0;
}


int SearchGcd(int x, int y) {
  int r;
  
  if ( x < y ) {
    r = x;
    x = y;
    y = r;
  }
  while( y > 0 ) {
    r = x % y;
    x = y;
    y = r;
  }

  return x;
}

