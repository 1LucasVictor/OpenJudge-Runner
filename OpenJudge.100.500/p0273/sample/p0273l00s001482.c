#include<stdio.h>
int main(){
  int n,i;
  int fib[50];
  scanf("%d",&n);
  fib[0]=fib[1]=1;
  for(i=2;i<=n;i++) fib[i]=fib[i-1]+fib[i-2];
  printf("%d\n",fib[n]);
  return 0;
}
