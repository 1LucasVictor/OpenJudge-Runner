#include <stdio.h>

int main(){
  int N,i,j,A[1000],l,v;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<N;i++){
    printf("%d",A[i]);
    if(i!=N-1){printf(" ");}
  }
  printf("\n");
  
  for(i=1;i<=N-1;i++){
    v = A[i];
    j = i-1;
    while(j>=0 && A[j]>v){
      A[j+1]=A[j];
    j--;
    }
    A[j+1]=v;
    for(l=0;l<N;l++){
      printf("%d",A[l]);
      if(l!=N-1){printf(" ");}
    }
    printf("\n");
  }
  

  return 0;
}


  

