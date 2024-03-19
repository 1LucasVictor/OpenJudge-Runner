#include<stdio.h>

int main(void){
  int N, D, X[200005], Y[200005], i,count=0;
  
  scanf("%d %d",&N,&D);
  
  for(i=0; i<N; i++){
    scanf("%d%d",&X[i],&Y[i]);
    if(X[i]*X[i]+Y[i]*Y[i]<=D*D){
      count=count+1;
    }
  }
  
  printf("%d",count);
  
}