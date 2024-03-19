#include<stdio.h>

int main(){
  int N,i,j,A[200000],sum=0,count[200000]={0};
  
  scanf("%d",&N);
  
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
    for(j=0;j<i+1;j++){
      if(A[i]==j+1)
        count[j] +=1;
    }
  }
  for(j=0;j<N;j++)
    printf("%d\n",count[j]);
  
  return 0;
}