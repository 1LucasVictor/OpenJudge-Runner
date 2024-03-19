#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  long long N, M, K, A, B = 0, i = 0, j = 0, suma = 0, max = 0, read = 0, readmax = 0;
  long long deskA[200001], deskB[200001];
  scanf("%lld %lld %lld", &N, &M, &K);
  for (i = 0; i < N; i++)
  {
    scanf("%lld", &deskA[i]);
  }
  for (i = 0; i < M; i++)
  {
    scanf("%lld", &deskB[i]);
  }

  for (i = 0; i < N; i++)
  {
    if (suma + deskA[i] <= K)
    {
      suma += deskA[i];
      A++;
    }
  }
  max = suma;
  read = A;
  for (j = 0; j < M; j++)
  {
    if (max + deskB[j] <= K)
    {
      max += deskB[j];
      read++;
      B++;
    }
    else
      break;
  }
  readmax = read;
  for (i = 0; i < A; i++)
  {
    max -= deskA[A - i - 1];
    read--;
    for (j = B; j < M; j++)
    {
      if (max + deskB[j] <= K)
      {
        max += deskB[j];
        read++;
        B++;
      }
      else
        break;
    }
    if (readmax < read)
    {
      readmax = read;
    }
  }
  printf("%lld\n", readmax);
}