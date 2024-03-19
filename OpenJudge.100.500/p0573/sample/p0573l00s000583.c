#include<stdio.h>
int main (void)
{
  char s[5];
  char a[1],b[1];
  int i=0,j=0;
  
  scanf("%s",s);
  
  if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3])
    printf("No");
  else
  {
    if((s[0]==s[1]&&s[2]==s[3])||(s[0]==s[2])&&s[1]==s[3]||(s[0]==s[3]&&s[1]==s[2]))
    printf("Yes");
  else
    printf("No");
  }
  
  return 0;
  
}