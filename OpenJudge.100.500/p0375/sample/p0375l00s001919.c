#include<stdio.h>
int main(){
  int n,i,j;
  scanf("%d",&n);
  for( i=1; i<=n; i++ ) {
    if( i%3==0 ) {
    	printf(" %d",i);
    } else if ( i%10==3 ) {
    	printf(" %d",i);
    } else if ( i%100>=30 && i%100<40 ) {
    	printf(" %d",i);
    } else if ( i%1000>=300 && i%1000<400 ) {
    	printf(" %d",i);
    } else if ( i%10000>=3000 && i%10000<4000 ) {
    	printf(" %d",i);
    }
  }
  printf("\n");
  return(0);
}