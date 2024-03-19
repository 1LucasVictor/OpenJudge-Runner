#include<stdio.h>
#define NUM 44
int fib(int);
int F[NUM];

int main(){
  int i,n,f;
  for(i=0;i<NUM;i++){
    F[i]=0;
  }
  scanf("%d",&n);
  f=fib(n);
  printf("%d\n",f);
}

int fib(int n){
  if(n==0||n==1){
    F[n]=1;
    return 1;
  }
  if(F[n]!=0)return F[n];
  else{
   F[n]=fib(n-1)+fib(n-2);
   return F[n];
  }
}

