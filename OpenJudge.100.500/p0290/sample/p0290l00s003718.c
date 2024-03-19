#include<stdio.h>
#include<math.h>

#define N 10000
int main(){
  int n,A[N],i,j,count=0,flag,k1;
  double k2;

  scanf("%d",&n);

  for(i=0;i<n;i++) scanf("%d",&A[i]);

  for( j = 0 ; j < n ; j++ ){
    flag = 0;
    if( A[j] != 2){
      if( A[j]%2 == 1){
	k2 = sqrt(A[j]);
	k1 = ceil(k2);
	for( i = 2 ; i <= k1 ; i++ ) {
	  if( A[j] % i == 0 ) {
	    flag = 1;
	    break;
	  }
	}
	if( flag == 0 ) count++;
      }
    }
    else count++;
  }
  printf("%d\n",count);
  return 0;
}