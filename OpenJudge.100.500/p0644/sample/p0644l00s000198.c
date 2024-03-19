#include <stdio.h>

int main( void ) {
  char s[3];
  int i, cnt;
  scanf( "%s", s );

  cnt = 0;
  for ( i = 0; i < 3; i++ ) {
    if ( s[i] == '1' ) {
      cnt++;
    }
  }

  printf( "%d\n", cnt );

  return 0;
}