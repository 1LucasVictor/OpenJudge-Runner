#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int n = 0, min = 0;
  char s[200000], t[200000];
  fgets(s, 200000, stdin);
  fgets(t, 200000, stdin);

  while (s[n] != '\0')
  {
    n++;
  }

  for (int i = 0; i < n-1; i++)
  {
    if (s[i] != t[i])
    {
      min++;
    }
  }

  printf("%d\n", min);
  return 0;
}