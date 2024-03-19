#include<stdio.h>
#define MAX 101

int main(void)
{
  int a, b, k, x[MAX], y[MAX], v[MAX], p, q, m;
  int i, j = 0, l = 0;
  
  scanf("%d %d %d", &a, &b, &k);
  
  for(i = 1 ; i <= 50 ; i++)
  {
    if(a % i == 0)
    {
      x[j] = i;
      j++;
    }
    if(b % i == 0)
    {
      y[l] = i;
      l++;
    }
  }

  i = 1;
  p = j;
  q = l;
  for(j = 0 ; j < p ; j++)
  {
    for(l = 0 ; l < q ; l++)
    {
      if(y[l] == x[j])
      {
        v[i] = x[j];
        i++;
      }
    }
  }
  
  printf("%d", v[k]);
  
  return 0;
}