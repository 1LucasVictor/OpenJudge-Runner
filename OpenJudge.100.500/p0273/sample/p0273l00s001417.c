#include<stdio.h>

void fib(void);

int F[44];
int main(){

  int n;

  scanf("%d",&n);

  fib();
  printf("%d\n",F[n]);

  return 0;
}

void fib(void){
  int i;

  F[0]=1;
  F[1]=1;

  for(i=2;i<45;i++){
    F[i]=F[i-2]+F[i-1];
  }
}