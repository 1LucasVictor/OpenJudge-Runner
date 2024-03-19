#include <stdio.h>
int main(void)
{

  int n, h = 0, m = 0;
  scanf("%d", &n);
 
  h = n / 3600;
  n = n % 3600;

  m = n / 60;
  n = n % 60;

  printf("%d:%d:%d\n", h, m, n);


    
    

  return 0;
}