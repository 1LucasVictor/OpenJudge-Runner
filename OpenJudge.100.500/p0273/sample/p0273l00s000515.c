#include <stdio.h>
#include <stdlib.h>

int main(){

  int n,i,F[45];

  scanf("%d",&n);

  F[0] = F[1] = 1;

  for(i=2;i<=n;i++)
    F[i] = F[i-1] + F[i-2];

  printf("%d\n",F[n]);
}