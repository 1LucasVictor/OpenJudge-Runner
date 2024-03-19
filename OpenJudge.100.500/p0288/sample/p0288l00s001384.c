#include <stdio.h>
#include <stdlib.h>
int main()
{
  int N,A[100],i,j,v,k;

  scanf("%d",&N);
  if(N<=0 || N>100) exit(0);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  printf("\n");
  for(i=0;i<N;i++){
    printf("%d ",A[i]);
  }
  printf("\n");
  
  for(i=1;i<N;i++){
    v=A[i];
    j=i-1;
    while(j>=0 && A[j]>v){
      A[j+1]=A[j];
      j--;
    }
    A[j+1]=v;
    for(k=0;k<N;k++){
      printf("%d ",A[k]);
    }
    printf("\n");
  }
  return 0;
}