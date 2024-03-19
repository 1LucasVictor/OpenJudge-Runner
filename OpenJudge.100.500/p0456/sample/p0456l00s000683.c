#include<stdio.h>
#include<string.h>
int N=400000;
int main()
  
{
      char s[N],t[N];
  int count=0,i,l;
   // gets(s);
     //gets(t);
  scanf("%s",s);
  scanf("%s",t);
    l=strlen(s);
  for(i=0;i<l;i++)
  {
    if(s[i]!=t[i])
    {
      count++;
    }
  }
  printf("%d",count);
return 0;
}