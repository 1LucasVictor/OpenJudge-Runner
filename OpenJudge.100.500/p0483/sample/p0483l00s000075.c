#include <stdio.h>

int main()
{
  char a[3];
  scanf("%c%c%c",&a[0],&a[2],&a[1]);
  if (a[0] == '7' || a[1] == '7' || a[2] == '7')
    printf("Yes\n");
  else
    printf("No\n");
  
}