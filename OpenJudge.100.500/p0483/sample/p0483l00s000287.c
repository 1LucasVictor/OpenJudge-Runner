#include <stdio.h>

int main()
{
  char n[3];
  int i = 0;
  
  scanf("%s",n);
  
  if (n[0] == '7')
    i++;
  
  if (n[1] == '7')
    i++;
  
  if (n[2] == '7')
    i++;
  
  if (i > 0)
    printf("Yes");
  
  else
    printf("No");
  
  return 0;
}