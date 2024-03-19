#include<stdio.h>
int fib(int n,int a,int b){
  int num;
   if(n>0){
     num=fib(n-1,a+b,a);
    return num;
  }

  else if(n==0){
    return a;
  }
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n,1,0));
  return 0;
}