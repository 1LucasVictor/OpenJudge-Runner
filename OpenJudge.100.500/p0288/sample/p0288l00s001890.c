#include <stdio.h>

int main(){
  int A[1000],i,v,j,N,f;

  scanf("%d\n",&N);
 
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }

  printf("\n");

  for(i=0;i<N;i++){
    printf("%d ",A[i]);
  }
  printf("\n");
  
  for(i=1;i<=N-1;i++){
    v = A[i];
    j = i - 1;

    while(j >=0 && A[j]>v){
      A[j+1] = A[j];
      j = j - 1;
      A[j+1]=v;
    }
    for(f=0;f<N;f++){
      printf("%d ",A[f]);
    }
    printf("\n");
  }
  return 0;
}