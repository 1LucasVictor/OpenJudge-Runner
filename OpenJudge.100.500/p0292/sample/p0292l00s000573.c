#include <stdio.h>
#define N 100
int main(){

  int i,j,k=0,F,n;
  int A[N];

  scanf("%d",&n);

  for(i=0 ; i<n ; i++){
    scanf("%d",&A[i]);
  }

  for(j=1 ; j<n ; j++){
    if(A[j]<A[j-1]){
      F=A[j];
      A[j]=A[j-1];
      A[j-1]=F;
      j=0;
      k++;
    }
  }

  for(i=0 ; i<n ; i++){
    printf("%d ",A[i]);
  }
  printf("\n%d",k);

  return 0;
}