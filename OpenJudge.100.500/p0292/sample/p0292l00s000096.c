#include<stdio.h>
int main(){

  int i,flag,N,S,c=0;
  scanf("%d",&N);
  int A[N];
  for (i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  while(flag){
    flag=0;
    for(i=N-1;i>0;i--){
      if(A[i]<A[i-1]){
	S=A[i];
	A[i]=A[i-1];
	A[i-1]=S;
	flag=1;
	c++;
      }
    }
  }
  for(i=0;i<N;i++){

    printf("%d ",A[i]);
  }
  printf("\n%d \n",c);
	 
  return 0;
}