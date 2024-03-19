#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
  int n=0;
  char s[200000];
  char t[200000];
  scanf("%s",s);
  scanf("%s",t);

  for(int i=0;i<strlen(s);i++)
  {
    if(s[i]!=t[i]) n++;
  }

  printf("%d\n",n);

  return 0;
}