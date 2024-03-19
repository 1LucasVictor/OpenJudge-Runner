#include <stdio.h>
#define n_max 45

int main(){
  int n, i;
  int fib[n_max];
  
  scanf("%d",&n);
  
  fib[0]=1;
  fib[1]=1;
  for(i=2;i<=n;i++){
    fib[i]=fib[i-1]+fib[i-2];
  }

  printf("%d\n",fib[n]);
  return 0;
}

