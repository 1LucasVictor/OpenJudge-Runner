#include<stdio.h>
#include<string.h>
int main()
{
  char s[300000],t[400000];
  int i,n;
  n=0;
  scanf("%s", &s);
  scanf("%s", &t);
  
  for (i=0;i<=strlen(s);i++)
  {
    if (s[i] != t[i]) 
    {
      n+=1;
    }
  }
    printf("%d",n);
    return 0;
}