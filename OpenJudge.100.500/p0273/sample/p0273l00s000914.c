#include<stdio.h>

int fibonacci(int n){
  if(n <= 1)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
  int i;

  scanf("%d",&i);
  printf("%d\n",fibonacci(i));
  
  return 0;
}

