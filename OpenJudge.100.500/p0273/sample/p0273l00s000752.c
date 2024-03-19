#include <stdio.h>
 int n;
int Fib(int n){
  if(n <= 1) return 1;
  else return Fib(n - 1) + Fib(n - 2);
}

int main(){
  scanf("%d",&n);
  printf("%d\n",Fib(n));
  return 0;
}