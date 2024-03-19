#include <stdio.h>
int main(void)
{
long int n, k, s, t;

  scanf("%ld%ld", &n, &k);
  s=n%k;
  t=k-s;

    if(s>=t)
      printf("%ld", t);
    else
      printf("%ld", s);

  return 0;
}
