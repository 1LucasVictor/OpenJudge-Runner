#include <stdio.h>

#define MAXFIBONUM 45

void fibonacci(int);

int main()
{
  int i, n, F[MAXFIBONUM];

  scanf("%d",&n);
  
  F[0] = 1;
  F[1] = 1;
  for(i = 2; i <= n; i++) {
    F[i] = F[i-2] + F[i-1];
  }

  printf("%d\n",F[n]);

  return 0;
}

