#include<stdio.h>
int main(void)
{
  int s[10];
  scanf("%s",s);
  if(s[0]==s[1] && s[1]==s[2])
    printf("No\n");
  else
    printf("Yes");
  return 0;
}
