#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
  char s[10],t[11];
  int flag=0;

  scanf("%s",s);
  scanf("%s",t);

  for(int i=0;i<strlen(s);i++)
  {
    if(s[i]!=t[i]) flag=1;
  }

  if(flag==1) printf("No\n");
  else printf("Yes\n");

  return 0;
}