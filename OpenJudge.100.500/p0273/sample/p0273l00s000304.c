#include <stdio.h>
#define N 44

int main(){
  int n ,i ,fib[N];

  fib[0]=1;
  fib[1]=1;

  scanf("%d",&n);
  if(n==0 || n==1) printf("1\n");

  else {
    for(i=2;i<=n;i++){
      fib[i]=fib[i-1]+fib[i-2];
    }
    printf("%d\n",fib[i-1]);
  }

  return 0;
}

