#include <stdio.h>

void fibo(int);
  
int main()
{
  int n;

  scanf("%d",&n);

  fibo(n);

  return 0;
}

void fibo(int n)
{
  int F[n+1],i;

  F[0]=1;
  F[1]=1;
  
  for(i=2;i<=n;i++)
    {
      F[i]=F[i-2]+F[i-1];
    }

  printf("%d\n",F[n]);
}

