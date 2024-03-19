#include <stdio.h>
#define N 45

int fibonacci(int);

int n;
int F[N];

int main()
{
  int i,fib;

  scanf("%d",&n);
  fib = fibonacci(n);
  printf("%d\n",fib);

  return 0;
}

int fibonacci(int n)
{
  if(n==0 || n==1){
    return F[n]=1; //F[n]にをメモしてそれを返す
  }
  if(F[n]!=NULL){
    return F[n];
  }
  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);

}