#include <stdio.h>

int main(void)
{
  char s[200020];
  char t[200020];
  int i,ans = 0;
  scanf("%s",s);
  scanf("%s",t);
  for(i=0; s[i] != '\0'; i++)
  {
    if(s[i] != t[i]) ans++;
  }
  printf("%d",ans);
  return 0;
}
