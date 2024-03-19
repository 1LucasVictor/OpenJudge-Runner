#include<stdio.h>
#define n 45

int N;
int fibnacci(int);

int main(){
  int Ans;

  scanf("%d",&N);
  Ans=fibonacci(N);
  printf("%d\n",Ans);
  return 0;
}
int fibonacci(int k){
  int i,F[N+1];
  
  F[0]=1;
  F[1]=1;
  for(i=2;i<=N;i++){
      F[i]=F[i-2]+F[i-1];
  }
  
  return F[N];

 
}