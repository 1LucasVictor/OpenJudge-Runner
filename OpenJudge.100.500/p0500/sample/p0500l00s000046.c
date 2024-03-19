#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int N, M, s[5], c[5];
  int i, j;
  
  scanf("%d %d", &N, &M);
  for (i = 0; i < M; i++)
  {
    scanf("%d %d", &s[i], &c[i]);
    if (N != 1 && s[i] == 1 && c[i] == 0)
    {
      printf("%d\n", -1);
      return 0;
    }
  }
  
  for (i = 0; i < M - 1; i++)
  {
    for (j = i + 1; j < M; j++)
    {
      if (s[i] == s[j] && c[i] != c[j])
      {
        printf("%d\n", -1);
        return 0;
      }
    }
  }
  
  if (N == 1)
  {
    for (i = 0; i < 10; i++)
    {
      if (i == c[0])
      {
        printf("%d\n", i);
        return 0;
      }
    }
  }
  
  if (N == 2)
  {
    for (i = 10; i < 100; i++)
    {
      for (j = 0; j < M; j++)
      {
        if (s[j] == 1 && i / 10 == c[j])
        {
          if (j == M - 1)
          {
            printf("%d\n", i);
            return 0;
          }
        }
        else if (s[j] == 2 && i % 10 == c[j])
        {
          if (j == M - 1)
          {
            printf("%d\n", i);
            return 0;
          }
        }
        else
        {
          break;
        }
      }
    }
  }
  
  if (N == 3)
  {
    for (i = 100; i < 1000; i++)
    {
      for (j = 0; j < M; j++)
      {
        if (s[j] == 1 && i / 100 == c[j])
        {
          if (j == M - 1)
          {
            printf("%d\n", i);
            return 0;
          }
        }
        else if (s[j] == 2 && (i % 100) / 10 == c[j])
        {
          if (j == M - 1)
          {
            printf("%d\n", i);
            return 0;
          }
        }
        else if (s[j] == 3 && i % 10 == c[j])
        {
          if (j == M - 1)
          {
            printf("%d\n", i);
            return 0;
          }
        }
        else
        {
          break;
        }
      }
    }
  }
  
  printf("%d\n", -1);
  
  return 0;
}