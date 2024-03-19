#include<stdio.h>

int f[50];

int fib(int x){
  if(x==0 || x==1)return f[x]=1;
  if(f[x]!=-1)return f[x];
  return f[x]=fib(x-1)+fib(x-2);
}

int main(){
  int i,n;
  for(i=0;i<50;i++){
    f[i]=-1;
  }
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}

