#include <stdio.h>

int main(void)
{
  int n;

  scanf("%d", &n);

  if (n / 100 == 7) 
    printf("Yes");
  else if ((n % 100) / 10 == 7)
    printf("Yes");
  else if (n % 10 == 7)
    printf("Yes");
  else
    printf("No");

  return 0;
}
