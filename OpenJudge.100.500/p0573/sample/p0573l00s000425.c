#include <stdio.h>

int main(int argc, char **argv)
{
  char s[5];
  fgets(s, 5, stdin);
  
  int tbl[256] = {0};
  int i;
  for (i = 0; i < 4; i++)
  {
    tbl[s[i]]++;
  }
  
  for (i = 0; i < 256; i++)
  {
    if (tbl[i] != 0 && tbl[i] != 2)
    {
      printf("No");
      return 0;
    }
  }
  
  printf("Yes");
  return 0;
}