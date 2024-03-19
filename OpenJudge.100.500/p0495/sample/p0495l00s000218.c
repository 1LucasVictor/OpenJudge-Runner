#include <stdio.h>

int main()
{
  int i;
  int s;
  int a[3] = {0};
  
  scanf("%c%c%c",&a[0],&a[1],&a[2]);

  s = a[0];
  i = 1;
  while (i < 3)
  {
    if (a[i] != s)
    {
      printf("Yes");
      return (0);
    }
    i++;
  }
  
  printf("No");
  return (0); 
}