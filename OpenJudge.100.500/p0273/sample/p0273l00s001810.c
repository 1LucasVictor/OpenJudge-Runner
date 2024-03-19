#include <stdio.h>
#define MAX 45

int Fibonacci(int);
int A[MAX];

int main() {
  int i,n,ans;
  scanf("%d",&n);

  printf("%d\n",Fibonacci(n));

  return 0;

}

int Fibonacci(int n) {
  if(n == 0 || n == 1) return 1;
  return Fibonacci(n - 1) + Fibonacci(n - 2);
}