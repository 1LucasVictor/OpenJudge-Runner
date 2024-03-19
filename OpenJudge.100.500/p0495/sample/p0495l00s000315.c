#include <stdio.h>
int main()
{
  char a[3];
  for(int i=0;i<3;i++)
  scanf("%c",&a[i]);
  int flag=0;
  for(int i=0;i<2;i++)
  {
    if(a[i]!=a[i+1])
      flag=1;
  }
  if(flag)
    printf("Yes");
  else
    printf("No");
}