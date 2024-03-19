#include <stdio.h>

int main(void){
  int n;
  int a[5000];
  int max;
  int sum;
  int i,j,k;

  while( 1 ){
    scanf("%d ",&n);
    if(!n) break;

    for(i=0;i<n;i++){
      scanf("%d ",&a[i]);
    }
    max = 0;
    for(i=0;i<n;i++){ // start : i 
       for( j=i;j<n;j++){ // end : j
	sum=0;
	for( k=i;k<=j;k++){
	  sum += a[k];
	}
	if( sum>max ) max=sum;
      }
    }
    printf("%d\n",max);
  }

  return 0;
}