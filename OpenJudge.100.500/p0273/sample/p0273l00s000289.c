#include <stdio.h>

int main()
{
  int x,i;
  int A[50];

  scanf("%d",&x);

  A[0]=A[1]=1;

  for(i=2;i<=x;i++)
  {
    A[i]=A[i-1]+A[i-2];
  }
  printf("%d\n",A[x]);
  return 0;
}

