#include <stdio.h>

int main()
{
  char num[3];
  int flag=0;
  
  for(int i=0;i<3;i++)
  {
    scanf("%c",&num[i]);
    if(num[i]=='7')
      flag=1;
  }
  if(flag)
    printf("Yes");
  else
    printf("No");
}