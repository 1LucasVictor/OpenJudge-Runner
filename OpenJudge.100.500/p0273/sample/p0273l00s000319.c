#include<stdio.h>
#include<math.h>
#define N 44

int fibonacci(int);

int main(){

  int i,n;

  scanf("%d",&n);

  printf("%d\n",fibonacci(n));
  return 0;
}

int fibonacci(int n){

  if( n==0 || n==1 )
    return 1;
  else
    return fibonacci(n-1) + fibonacci(n-2);
}