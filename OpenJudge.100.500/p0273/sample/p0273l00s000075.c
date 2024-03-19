#include<stdio.h>

int data[50];

int fib(int);

int main(){
  int n,i;

  for(i = 0;i < 50;i++){
    data[i] = -1;
  }

  scanf("%d",&n);
  
  printf("%d\n",fib(n));

  return 0;
}

int fib(int n){
  if(n == 0 || n == 1){
    return data[n] = 1;
  }
  if(data[n] != -1){
    return data[n]; 
  }
  return data[n] = fib(n-1) + fib(n-2);
}

