#include<stdio.h>

int main(){
  int N,i,j,A[200000]={},sum=0,count[200000]={};
  
  scanf("%d",&N);
  
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  for(j=0;j<N+1;j++)
    count[A[j]]++;
  for(j=1;j<N+1;j++)
    printf("%d\n",count[j]);
  
  return 0;
}