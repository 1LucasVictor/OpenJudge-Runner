#include <stdio.h>
#define N 100

int F[N];

int fib(int n){
  int i;
  F[0] = 1;
  F[1] = 1;
  for( i = 2 ; i <= n ; i++){
    F[i] = F[i-2] + F[i-1];
  }
  
  return F[n];

}

int main(){
  int n, i, j, k;
  int ans;

  scanf("%d", &n);
  ans = fib(n);

  printf("%d\n" ,ans);
  return 0; // Don't forget return 0
}