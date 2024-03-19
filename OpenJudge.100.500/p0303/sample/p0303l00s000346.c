#include<stdio.h>
int main(){

  int i,n,k,w[100001];

  scanf("%d", &n );
  scanf("%d", &k );

  for ( i = 0; i < n; i++ ){
    scanf("%d", &w[i] );
  }

  int P,sum,cnt;
  P = w[0];

  for ( i = 0; i < n; i++ ){
    if ( P < w[i] ) P = w[i];
  }

  while(1){

    sum = 0;
    cnt = 1;

    for ( i = 0; i < n; i++ ){
    
      if ( sum + w[i] > P ){
	sum = w[i];
	cnt += 1;
      } else {
	sum = sum + w[i];
      }
    
    }

    if ( cnt <= k ) {
      break;
    } else {
      P += 1;
    }

  }

  printf("%d\n", P );

  return 0;
 
}