#include <stdio.h>

int main(void)
{
  int n = 0;
  int i;
  
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++){
    if(i % 3 == 0 || i % 10 == 3 || i % 100 == 3 || i % 1000 == 3)
      printf(" %d", i);  
  }
  putchar('\n');   
  
  return 0;
}