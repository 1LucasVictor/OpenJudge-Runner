#include<stdio.h>
#include<math.h>
int main(){
  int n ,i ,x=100000;
  double y;
  scanf ( "%d" ,&n );

  for ( i=0 ; i<n ; i++ ){
    x = x * 1.05;
    y = x;
    y = y / 1000;
    y = y + 0.9;
    x = y;
    x = x * 1000;
  }

  printf ( "%d\n" ,x );
  return 0;
}