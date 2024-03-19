#include <stdio.h>
int F[45];

int main(){

  int n,i;

  F[0] = F[1] = 1;

  scanf("%d",&n);

  for(i=2; i<=n; i++)
    F[i] = F[i-2] +F[i-1];

  printf("%d\n",F[n]);
}