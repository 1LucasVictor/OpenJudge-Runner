#include<stdio.h>
#include<stdlib.h>
void main(void)
{
  int N,M,*A,*B,tmp=0;
  scanf("%d",&N);
  A=(int*)malloc(sizeof(int)*(N+1));
  B=(int*)malloc(sizeof(int)*(N+1));
  
  for(int i=1;i<=N;i++){
    B[i]=0;
  }
  
  for(int i=2;i<=N;i++){
    scanf("%d",&A[i]);
    B[A[i]]++;
  }
  
  for(int i=1;i<=N;i++){
    printf("%d\n",B[i]);
  }
 
}