#include<stdio.h>
 
 
int main()
{
  char s[1000000],t[1000000];
  scanf("%s%s",s,t);
  
  char *ptrs,*ptrt;
  ptrs = s;
  ptrt = t;
  
  int cnt = 0;
  while(*ptrs != '\0')
  {
    if(*ptrs!=*ptrt)
    {
      cnt++;
    }
    ptrs++;
    ptrt++;
  }
  printf("%d\n",cnt);
  return 0;
}