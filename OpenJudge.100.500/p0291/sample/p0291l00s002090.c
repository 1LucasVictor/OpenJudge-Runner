#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int mpd(int *, int);

int main(void)
{
  int i, n, *A;
  scanf(" %d", &n);
  A = (int *) malloc(sizeof(int[n]));
  for (i = 0; i < n; i++)
    scanf(" %d", A + i);
  printf("%d\n", mpd(A, n));
  return 0;
}

// mpd returns the maximum pairwise difference (Aj - Ai) from the list where j > i.
int mpd(int *A, int len)
{
  int i, j;
  int currentMax = INT_MIN;
  for (i = 0; i < len - 1; i++)
    for (j = i + 1; j < len; j++)
      if (A[j] - A[i] > currentMax)
	currentMax = A[j] - A[i];
  return currentMax;
}

