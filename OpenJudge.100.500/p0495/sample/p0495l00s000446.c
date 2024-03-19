#include<stdio.h>

int main(void)
{
  char a[5];
  scanf("%s", a);
  if(a[0] == a[1] && a[1] == a[2])
  {
    printf("No\n");
  }
  else
  {
    printf("Yes");
  }
  
  return (0);
}