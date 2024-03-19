#include <stdio.h>
#define MAX 45

int Fibonacci(int);
int A[MAX];

int main() {
  int i,n,ans;
  scanf("%d",&n);

  ans = Fibonacci(n);

  printf("%d\n",ans);

  return 0;

}

int Fibonacci(int n) {
  if(n == 0 || n == 1) return 1;
  else return Fibonacci(n - 1) + Fibonacci(n - 2);
}