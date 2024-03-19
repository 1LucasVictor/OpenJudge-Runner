#include <stdio.h>

int fibonacci(int n){

  if(n==0 || n ==1)return 1;

  return fibonacci(n-2)+fibonacci(n-1);
}

int main(){

  int n, ans;

  scanf("%d",&n);

  ans = fibonacci(n);

  printf("%d\n",ans);

  return 0;
}