#include <unistd.h>
#include <stdio.h>

int main(void)
{
  int a, b, c;
  a = 0;
  b = 0;
  c = 0;
  scanf("%d %d %d", &a, &b, &c);
  if ((a == 5 && b == 5 && c == 7) || (a == 5 && b == 7 && c == 5) || (a == 7 && b == 5 && c == 5))
  {
    write(1, "YES", 3);
    return 0;
  }
  write(1, "NO", 2);
  return 0;
}
