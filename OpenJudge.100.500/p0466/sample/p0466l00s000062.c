#include<stdio.h>
#include<string.h>
int main()
{
  char s[13],t[13],*str;
  int result;
  scanf("%s",s);
  scanf("%s",t);
  str=strstr(t,s);
  if(NULL != str)
    puts("Yes");
  else
    puts("No");
    
  return 0;
}