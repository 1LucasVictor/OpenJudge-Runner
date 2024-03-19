#include<stdio.h>
int main(){
  int i, n, x=100000;
  scanf ( "%d" ,&n );

  for ( i=0 ; i<n ; i++ ){
    x = x + 100000 * 0.05;
  }

  x = x / 10000;
  x++;
  x = x * 10000;

  printf ( "%d\n" ,x );
  return 0;
}