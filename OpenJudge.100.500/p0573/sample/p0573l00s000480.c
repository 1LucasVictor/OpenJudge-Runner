#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  char s[10] = {0};
  int alp[26] = {0};
  int i = 0;
  int count = 0;

  scanf("%s", s);

  for(i = 0; i < 4; i++)
  {
    if(++alp[s[i] - 'A'] == 2)
    {
      count++;
    }
  }

  printf("%s\n", (count == 2 ? "Yes" : "No"));

  return 0;
}
