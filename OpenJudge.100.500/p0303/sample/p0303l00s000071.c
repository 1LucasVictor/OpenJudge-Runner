#include<stdio.h>
int main(){

  int i,n,k,w[100001];

  scanf("%d", &n );
  scanf("%d", &k );

  for ( i = 0; i < n; i++ ){
    scanf("%d", &w[i] );
  }

  int P,sum,cnt,min,max;

  min = 1;
  max = 1000000000;

  while(1){

    sum = 0;
    cnt = 1;
    P = ( min + max ) / 2;

    for ( i = 0; i < n; i++ ){

      if ( w[i] > P ) {
	cnt = k + 1;
	break;
      } else if ( sum + w[i] > P ){
	sum = w[i];
	cnt += 1;
      } else {
	sum = sum + w[i];
      }
    
    }

    if ( min == max ){
      P = min;
      break;
    } else if ( cnt > k ){
      min = P + 1;      
    } else {
      max = P;
    }

  }

  printf("%d\n", P );

  return 0;

}