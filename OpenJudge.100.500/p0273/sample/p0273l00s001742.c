#include<stdio.h>

int fibonacci(int n){
  if(n==0 || n==1)
    return 1;
  
  return fibonacci(n-2) + fibonacci(n-1);
}
int main(void){
  
  int i,n;
  
  scanf("%d",&n);
  
  printf("%d\n",fibonacci(n));
  
  return 0;
}