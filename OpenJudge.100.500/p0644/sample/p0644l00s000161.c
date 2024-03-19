#include <stdio.h>

int main()
{
  char s[3];
  int i;
  int cnt=0;
  for(i=0;i<3;++i)
  {   scanf("%c",&s[i]);
      if(s[i]=='1')
          cnt++;
  }
  
  printf("%d",cnt);
  
}  