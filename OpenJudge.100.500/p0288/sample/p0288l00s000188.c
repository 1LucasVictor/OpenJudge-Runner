#include<stdio.h>

int main()
{
  int i,j,v;
  int A[100],N;
  
  scanf("%d",&N);
  for(i=0; i<N; ++i){
    scanf("%d",&A[i]);
    printf("%d",A[i]);
    if(i!=N-1)printf(" ");
 
 }
  printf("\n");

  for(i=1; i<N; i++){
    v=A[i];
    j=i-1;
    while(j>=0 && A[j]>v){
      A[j+1]=A[j];
      j--;
      
    }
    A[j+1]=v;
    
    for(j=0;j<N;j++){
      printf("%d",A[j]);
      if(j!=N-1)printf(" ");
    }
    printf("\n");
  }
  return 0;
}