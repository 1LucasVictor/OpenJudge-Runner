#include <stdio.h>

int main(void)
{
  char s[4];
  int i, j;
  int count = 0;

  scanf ("%s", s);

  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if (s[i] == s[j])
      {
        count++;
      }
    }
  }
  
  if (count != 8){
    printf ("No\n");
  }

  else
  {
    printf ("Yes\n");
  }
  
  return 0;
}

