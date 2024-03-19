#include<stdio.h>
#define N_MAX 50

int F[N_MAX];
int fibonacci(int n);

int fibonacci(int n)
{
  int i;
  F[0]=1;
  F[1]=1;
  
  for(i=2 ;i<=n; i++){
    F[i] = F[i-2] + F[i-1];
  }

  return F[n];
}

int main()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", fibonacci(n));
}