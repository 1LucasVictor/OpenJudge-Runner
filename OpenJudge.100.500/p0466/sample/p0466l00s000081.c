#include<string.h>
#include<stdio.h>
int main()
{
  char s[11],t[12];
  scanf("%s%s",s,t);
  int f=1;
  int n=strlen(s);
  for(int i=0;i<n;++i)
  {
    if(s[i]!=t[i])
    {f=0;break;}
  }
  if(f)
    printf("Yes");
  else
    printf("No");
  return 0;
}
