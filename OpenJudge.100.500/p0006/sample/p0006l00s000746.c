#include <stdio.h>

int main()
{
  int debt = 100000, n, i, j;
  
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    debt = debt * 1.05 + 999;
    debt = (debt/1000) * 1000;
  }
  
  printf("%d\n", debt);
  
  return 0;
}