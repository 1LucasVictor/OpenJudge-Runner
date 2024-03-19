#include<stdio.h>

int Fib[45];

void makeFibonacci(void );

void makeFibonacci(){
  int i;
  Fib[0]=1;
  Fib[1]=1;
  for(i=2 ; i<45 ; i++) Fib[i]=Fib[i-2]+Fib[i-1];
}

int main(){
  int n;

  makeFibonacci();
  scanf("%d",&n);
  printf("%d\n",Fib[n]);

  return 0;
}