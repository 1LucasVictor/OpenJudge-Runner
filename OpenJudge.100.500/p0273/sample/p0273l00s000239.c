#include<stdio.h>
#define N 45
int A[N];

int fibonacci(int n)
{
  if(n==0 || n==1) return 1;
  if(A[n] !=-1) return A[n];
  return A[n] = fibonacci(n-2)+fibonacci(n-1);
}
int main()
{
  int i,n;

  
  for(i=0; i<N; i++) A[i] =-1;
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));

  return 0;
}

