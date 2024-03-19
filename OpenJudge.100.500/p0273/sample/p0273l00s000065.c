#include<stdio.h>
#define N 45

int F[N];
makeFibonacci(){
  int i;

  F[0] = 1;
  F[1] = 1;
  for(i=2;i<N;i++){
    F[i] = F[i-2] + F[i-1];
  }
}

int main(){
  int n;

  makeFibonacci();
  scanf("%d",&n);
  printf("%d\n",F[n]);

  return 0;
}