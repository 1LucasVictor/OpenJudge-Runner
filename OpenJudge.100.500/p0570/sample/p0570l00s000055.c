#include <stdio.h>
#include <stdlib.h>

int max(int, int);

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  if((0 <= a)&&(a <= 1000000000)&&(0 <= b)&&(b <= 1000000000)&&(a != b))
  {
    int a_k_abs, b_k_abs, k = 0;
    for(int i = 1; i <= max(a, b); i++)
    {
      a_k_abs = abs(a - i);
      b_k_abs = abs(b - i);
      if(a_k_abs == b_k_abs) k = i;
    }
    if(k == 0) printf("IMPOSSIBLE");
    else printf("%d", k);
  }
  return 0;
}

int max(int a, int b)
{
  if(a > b) return a;
  else return b;
}
