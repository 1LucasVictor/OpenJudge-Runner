#include<stdio.h>

#define NIL -1

int fibonacci(int);

int fib[45];

int main(){

  int n,i,answer;
  
  scanf("%d",&n);

  for(i=0;i<=n;i++){

    fib[i]=NIL;

  }

  answer=fibonacci(n);

  printf("%d\n",answer);

  return 0;
}

int fibonacci(int n){

  if(n==0||n==1) return fib[n]=1;
  if(fib[n]!=NIL) return fib[n];

  return fib[n]=fibonacci(n-2)+fibonacci(n-1);

}