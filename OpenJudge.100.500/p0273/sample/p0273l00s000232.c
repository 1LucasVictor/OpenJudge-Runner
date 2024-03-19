#include <stdio.h>
#define N 44

int f[N];

int fib(int);

int main(){
  int n,i;

  scanf("%d",&n);
  for(i = 0;i <= n;i++){
    f[i] = -1;
  }
  
    f[n] = fib(n);

  printf("%d\n",f[n]);
  
  return 0;
}

int fib(int n){
  if(n == 0 || n == 1) return f[n] = 1;
  else if(f[n] == -1) return f[n] = fib(n-2) + fib(n-1);
  else return f[n];
}

