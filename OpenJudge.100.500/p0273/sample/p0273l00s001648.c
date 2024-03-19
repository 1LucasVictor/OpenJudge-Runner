#include<stdio.h>
#define F 44

int main()
{
  int i,n,N[F];

  scanf("%d",&n);
  N[0]=1;
  N[1]=1;

  for(i=2;i<=n;i++){
    N[i] = N[i-1] + N[i-2];
  }
  printf("%d\n",N[n]);
  return 0;
}