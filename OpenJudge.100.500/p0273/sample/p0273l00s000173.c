#include<stdio.h>
#define N 45
int Fib[N];

int F(int n){
  if(n==0||n==1)return Fib[n]=1;
  if(Fib[n]!=0)return Fib[n];
  return Fib[n]=F(n-1)+F(n-2);
}

int main(){
  int n,i;
  for(i=0;i<N;i++)Fib[i]=0;
  scanf("%d",&n);
  printf("%d\n",F(n));
  return 0;
}


