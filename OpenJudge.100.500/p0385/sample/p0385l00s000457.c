#include <stdio.h>
#include <string.h>

int main()
{
  char x[1001];
  int n;

  do
  {
    scanf("%s", x);

    // calculate n
    n = 0;
    for (int i = 0; i < strlen(x); i++)
    {
      n = n + x[i] - '0';
    }

    if (n != 0)
    {
      printf("%d\n", n);
    }
  } while (n != 0);

  return 0;
}
