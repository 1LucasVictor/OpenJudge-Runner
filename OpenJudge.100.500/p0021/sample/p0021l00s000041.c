#include <stdio.h>
int main(){
  int a ,n ,i ,j ,total=0 ,high=0 ,nam[5000];
  while( 1 ){
    scanf( "%d" ,&n );
    if( n == 0 ){
      break;
    }

    for( j=0 ; j<n ; j++ ){
      scanf( "%d" ,&nam[j] );
    }
    
    for( i=0 ; i<n-1 ; i++ ){
      for( j=i ; j<n ; j++ ){
	total += nam[j];
	if( total > high ){
	  high = total;
	}
      }
      total = 0;
    }

    printf( "%d\n" ,high );
    high = 0;
    total = 0;
  }
  return 0;
}