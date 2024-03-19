#include<stdio.h>
int main(){
  int i,flag,N=5,S,c=0;
  int A[]={5,3,2,4,1};
  while(flag){
    flag=0;
    for(i=N-1;i>=1;i--){
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
    printf("%d",A[i]);
  }
  printf("\n%d \n",c);
	 
  return 0;
}