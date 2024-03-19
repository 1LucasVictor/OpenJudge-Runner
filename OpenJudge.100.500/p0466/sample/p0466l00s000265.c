#include <stdio.h>

int main()
{
  char a[10],b[11];
  
  scanf("%s %s",a,b);
  
  int flag=1;
  
  int i=0;
  while(a[i]!=0)
  {
    if(a[i]!=b[i])
      flag=0;
    i++;
  }
  
  if(flag)
   printf("Yes");
  else
    printf("No");
}