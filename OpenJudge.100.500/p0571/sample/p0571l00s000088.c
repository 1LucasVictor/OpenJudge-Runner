#include <stdio.h>
int main(void)
{
  int N, A, B, train, taxi;
  scanf("%d %d %d",&N, &A, &B);
  train = A * N;
  taxi = B;

  if(train < taxi)
    printf("%d\n", train);
  else
    printf("%d\n", taxi);

  return 0;
}

