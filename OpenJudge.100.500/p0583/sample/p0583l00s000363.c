#include <stdio.h>

char s[200*1000+1];

int c,d;
int n;

int rec( int a , int b )
{
  if( a == c && b == d ) {
    return 1;
  }
  
  if( a > c || b > d ) {
    return 0;
  }
  
  if( s[a+1] == '.' && a+1 != b ) {
    if( rec( a+1 , b ) == 1 ) {
      return 1;
    }
  }
  
  if( s[a+2] == '.' && a+2 != b ) {
    if( rec( a+2 , b ) == 1 ) {
      return 1;
    }
  }
  
  if( s[b+1] == '.' && b+1 != a ) {
    if( rec( a , b+1 ) == 1 ) {
      return 1;
    }
  }
  
  if( s[b+2] == '.' && b+2 != a ) {
    if( rec( a , b+2 ) == 1 ) {
      return 1;
    }
  }
  
  return 0;
}

int main( int argc , char *argv[] )
{
  int a,b;
  int i;
  
  scanf( "%d %d %d %d %d\n" , &n , &a , &b , &c , &d );
  
  for( i = 0 ; i < n ; i++ ) {
    s[i+1] = getchar();
  }
  
  if( rec( a , b ) == 1 ) {
    printf( "Yes\n" );
  } else {
    printf( "No\n" );
  }
  
  return 0;
}