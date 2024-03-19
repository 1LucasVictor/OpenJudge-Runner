#include <stdio.h>

int main()
{
  char s[4];
  int i, j;
  int count = 0;
  for (i = 0; i < 4; i++)
  {
    scanf("%c", &s[i]);
  }
  for (i = 0; i < 3; i++)
  {
    for (j = i + 1; j < 4; j++)
    {
      if (s[i] == s[j])
      {
        count++;
      }
    }
  }
  if (count == 2)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}