#include <stdio.h>

int main()
{
  char str[16];
  
  scanf( "%s", str );
  
  if ( ( str[0] == str[1] && str[2] == str[3] ) ||
      (str[0] == str[2] && str[1] == str[3] ) ||
      (str[0] == str[3] && str[1] == str[2] ) ) {
    printf( "Yes\n" );
  } else {
    printf( "No\n" );
  }
  
}