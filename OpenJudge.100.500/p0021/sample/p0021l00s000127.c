#include <stdio.h>
int main(){
  int a ,n ,i ,total=0 ,high=0;
  while( scanf( "%d" ,&n ) ){
    if( n == 0 ){
      break;
    }
    
    for( i=0 ; i<n ; i++ ){
      scanf( "%d" ,&a );
      total += a;

      if( total < 0 ){
	total = 0;
      }

      else if( total > high ){
	high = total;
      }
    }
    printf( "%d\n" ,high );

    high = 0;
    total = 0;
  }
  return 0;
}