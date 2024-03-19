#include <stdio.h>
int fib(int);
int N[45];

int main(){
  int n,i;
  for(i=0;i<45;i++)N[i]=-1;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}

int fib(int n){
  if(n==0||n==1)return N[n]=1;
  if(N[n]!=-1)return N[n];
  return N[n]=fib(n-1)+fib(n-2);
}

