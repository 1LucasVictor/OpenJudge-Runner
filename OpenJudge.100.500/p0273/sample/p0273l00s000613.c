#include <stdio.h>

int F[45];

int fibonacci(int n)
{
  if(n == 0 || n == 1)
    {
      return F[n] = 1;
    }
  if(F[n] != 0)
    {
      return F[n];
    }
  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
  int n,anser;
  scanf("%d",&n);
  anser = fibonacci(n);
  printf("%d\n",anser);
  return 0;
}

