#include <stdio.h>
int Fib(int n){
  int i,a,b = 1,c = 1;
  for(i=2; i<=n; i++){
    a = b + c;
    c = b;
    b = a;
  }
  return a;
}
int n;
int main(){
  scanf("%d",&n);
  printf("%d\n",Fib(n));
  return 0;
}