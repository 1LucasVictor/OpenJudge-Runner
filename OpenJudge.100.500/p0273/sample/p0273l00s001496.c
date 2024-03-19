#include <stdio.h>

int fibonacci(int);

int M[100];

int main(){
  int n;

  scanf("%d",&n);

  printf("%d\n",fibonacci(n));

  return 0;
}

int fibonacci(int n){

  if(n==0 || n==1)return M[n] = 1;
  
  if(M[n] != 0)return M[n];
  
  return M[n] = fibonacci(n-1) + fibonacci(n-2);
}

