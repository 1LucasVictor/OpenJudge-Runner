#include <stdio.h>
 
int main(void)
{
  int x;
  int a, b, c, sum;
  scanf("%d", &x);
  a=x/500*1000;
  b=x%500;
  c=b/5*5;
  sum=a + c;
  printf("%d \n", sum);
  
  return 0;
}