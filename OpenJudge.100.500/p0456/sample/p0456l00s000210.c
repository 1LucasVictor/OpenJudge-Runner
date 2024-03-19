#include<stdio.h>
#include<string.h>
int main()
{
  char s[1000000],t[1000000];
  scanf("%s",s);
  scanf("%s",t);
  int count=0;
  int s1=strlen(s);
  for(int i=0;i<s1;i++)
  {
    if(s[i]!=t[i])
    {
      count++;
    }
  }
  printf("%d",count);
  return 0;
}