#include<stdio.h>

int main(){ 
  int fib[50];
  int i,num;
  scanf("%d",&num);
  fib[0]=fib[1]=1;
  for(i=2;i<=num;i++){
    fib[i]=fib[i-1]+fib[i-2];
  }
  printf("%d\n",fib[num]);
  return 0;
}

