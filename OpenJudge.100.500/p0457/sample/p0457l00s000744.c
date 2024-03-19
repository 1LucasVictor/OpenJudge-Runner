#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(int a_i, int b_i);
int array_a[200000],
    array_b[200000];
int main(void)
{
  int n, m, k, ans = 0, time = 0, a_i = 0, b_i = 0;

  scanf("%d%d%d", &n, &m, &k);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &array_a[i]);
  }
  for (int i = 0; i < m; i++)
  {
    scanf("%d", &array_b[i]);
  }

  int count = 0;
  while (count < n + m)
  {
    if (array_a[a_i] + time <= k || array_b[b_i] + time <= k)
    {
      count++;
      ans++;
      if (array_a[a_i] < array_b[b_i])
      {
        time += array_a[a_i];
        a_i++;
      }
      else if (array_b[b_i] < array_a[a_i])
      {
        time += array_b[b_i];
        b_i++;
      }
      else
      {
        int bool = check(a_i, b_i);
        if (bool = 0)
        {
          time += array_a[a_i];
          a_i++;
        }
        else
        {
          time += array_b[b_i];
          b_i++;
        }
      }
    }
    else
    {
      break;
    }
  }

  printf("%d\n", ans);
  return 0;
}

int check(int a_i, int b_i)
{
  if (array_a[a_i + 1] < array_b[b_i + 1])
  {
    return 0;
  }
  else if (array_b[b_i + 1] < array_a[a_i + 1])
  {
    return 1;
  }
  else
  {
    return check(a_i + 1, b_i + 1);
  }
}