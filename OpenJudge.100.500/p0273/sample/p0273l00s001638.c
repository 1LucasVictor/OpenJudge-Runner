#include<stdio.h>

int main(){
  int n;
  int i;
  scanf("%d",&n);
  int Fib[50];
  Fib[0]=1;
  Fib[1]=1;
  for(i=2;i<=n;i++)Fib[i]=Fib[i-1]+Fib[i-2];
  printf("%d\n",Fib[n]);
  return 0;
}
		  