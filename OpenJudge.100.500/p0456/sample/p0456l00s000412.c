#include<stdio.h>
#include<string.h>
int main()
{
  char s[200000],t[200000];
  long i,n;
  n=0;
  scanf("%s", &s);
  scanf("%s", &t);
  
  //printf("%s",s);
  
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