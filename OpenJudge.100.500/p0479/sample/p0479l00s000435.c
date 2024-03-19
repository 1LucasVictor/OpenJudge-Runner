#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N;
  int *A;
  int *BK;
  scanf("%d", &N);
  A=(int*)malloc(sizeof(int)*(N+1));
  BK=(int*)malloc(sizeof(int)*(N+1));

  for (int i=2;i<=N;i++)
    scanf(" %d", &A[i]);
  for (int i=1;i<=N;i++)
    BK[i]=0;
  for (int j=2;j<=N;j++) {
        BK[A[j]]++;
  }

  for (int i=1;i<=N;i++)
    printf("%d\n",BK[i]);

  fflush(stdout);
  free(A);
  free(BK);
  return 0;
}