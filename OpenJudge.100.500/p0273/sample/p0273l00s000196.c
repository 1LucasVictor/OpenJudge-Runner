#include<stdio.h>
int Fibonacci(int n){
  int a=1,b=1,i;

  if(n==2)return 2;
  for(i=2;i<n;i+=2){
    a+=b;
    b+=a;
  }
  if(i%2==0)return b;
  return a;
}
int main(){
  int n,f;

  scanf("%d",&n);
  f=Fibonacci(n);
  printf("%d\n",f);
  return 0;
}

