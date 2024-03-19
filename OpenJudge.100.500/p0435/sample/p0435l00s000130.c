#include <stdio.h>

int main(void){

  int N,D,i,j;
  int count = 0;
  scanf("%d %d",&N,&D);
  int X[N],Y[N];
  for(i=0;i<N;i++){
  	scanf("%d %d",&X[i],&Y[i]);
    if((X[i]*X[i])+(Y[i]*Y[i])<=D*D){
    	count++;
    }
  }
  printf("%d",count);
  return 0;
  
}