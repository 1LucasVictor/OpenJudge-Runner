#include <stdio.h>
int main()
{
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if (a > b)
    if (b > c)

      printf("%d %d %d\n", c, b, a);

  if (a > b)
    if (b < c)
      if (a > c)

        printf("%d %d %d\n", b, c, a);

  if (a > b)
    if (b < c)
      if (a < c)

        printf("%d %d %d\n", b, a, c);

  if (a < b)
    if (b < c)

      printf("%d %d %d\n", a, b, c);

  if (a < b)
    if (b > c)
      if (a > c)

        printf("%d %d %d\n", c, a, b);
if (a < b)
    if (b > c)
      if (a < c)

        printf("%d %d %d\n", a, c, b);


  return 0;
}