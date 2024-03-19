#include<stdio.h>
int main ()
{
  int i;
  char s[4];
  scanf("%s",s);
  for(i=0;i<3;i++)
  if(s[i]=='7')
  {
    printf("Yes");return 0;
  }
  printf("No");
  return 0;
}