#include "stdio.h"
#include "string.h"

int main()
{
  char s1[100];
  fgets (s1,100,stdin);
  int l = strlen(s1)-1;
  char s2[l+1];
  fgets (s2,l+1,stdin);
  int i,c=0;
  for (i=0; i<l; i++)
    {
      if (s1[i] == s2[i])
        c=0;
      else
        c=1;
    }
  if (c==0)
    printf ("Yes\n");
  else
    printf ("No\n");
  return 0;
}
