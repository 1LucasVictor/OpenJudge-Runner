#include<stdio.h>
#define N 44

int main(void){
  int n, i;
  int fib[N];

  scanf("%d",&n);

  for(i=0;i<=n;i++){

    if(i==0 || i==1) fib[i] = 1;

    else if(i>=2) fib[i] = fib[i-1] + fib[i-2];

  }

  printf("%d\n",fib[n]);

return 0;
}