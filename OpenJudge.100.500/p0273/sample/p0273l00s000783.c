#include <stdio.h>
#define N 45
int A[N];

int fibonacci(int n){
  if(n<2){
    return 1;
  }
  else
    A[n] = fibonacci(n-1) + fibonacci(n-2);
  return A[n];
}
main(){
  int i,n,m;
  scanf("%d",&n);
  m = fibonacci(n);
  printf("%d\n", m);
  return 0;
}
  