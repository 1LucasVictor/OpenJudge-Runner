#include <stdio.h>

int main(void)
{
  int s1;
  int s2;
  int s3;
  
  scanf("%d", &s1, &s2, &s3);
  
  printf("%d\n", s1%10 + (s1/10)%10 + (s1/100)%10);
  
  return (0);
}