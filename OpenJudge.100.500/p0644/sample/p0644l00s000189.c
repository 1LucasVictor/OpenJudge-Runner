#include <stdio.h>
int main ()
{
  int a,b,c;
  char s[100];
  
  scanf("%s",&s);
  if(s[0]=='1')
  {
    a++;
  }
  if(s[1]=='1')
  {
    a++;
  }
  if(s[2]=='1')
  {
    a++;
  }
 
  printf("%d",a);
  
  return 0;
}