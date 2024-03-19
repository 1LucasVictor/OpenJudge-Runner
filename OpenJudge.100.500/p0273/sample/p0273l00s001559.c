#include <stdio.h>
#define N 45
int A[N];

int fibonacci(int n){
  if(n==0 || n==1){
    return 1;
  }
  else if(n >= 2)
    A[n] = fibonacci(n-1) + fibonacci(n-2);
  return A[n];
}
main(){
  int i,n,m;
  int A[N];
  for(i=0;i<N;i++){
    A[i]=0;
  }
  scanf("%d",&n);
  m = fibonacci(n);
  printf("%d\n", m);
  return 0;
}
  