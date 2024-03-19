#include<stdio.h>
int Fibonacci(int n){
  int a=1,b=1,i,tmp=1;

  for(i=1;i<n;i++){
    tmp=a+b;
    a=b;
    b=tmp;
  }
  return tmp;
  return a;
}
int main(){
  int n,f;

  scanf("%d",&n);
  f=Fibonacci(n);
  printf("%d\n",f);
  return 0;
}

