#include<stdio.h>

int n, F[44+1], Ans;


int fibonacci(int n){
  int i;
  
  F[0]=1;
  F[1]=1;
  for(i=2; i<=44; i++){
    F[i] = F[i-2]+F[i-1];
  }
  return F[i];
}

int main(){
  scanf("%d",&n);
  Ans=fibonacci(n);
  printf("%d\n",Ans);
  return 0;
}