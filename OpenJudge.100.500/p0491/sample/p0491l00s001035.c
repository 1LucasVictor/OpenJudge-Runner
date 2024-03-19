#include <stdio.h>
int main(void)
{
  int n, k, s, t;

  scanf("%d%d", &n, &k);
  s=n%k;
  t=k-s;

    if(s>=t)
      printf("%d", t);
    else
      printf("%d", s);

  return 0;
}
