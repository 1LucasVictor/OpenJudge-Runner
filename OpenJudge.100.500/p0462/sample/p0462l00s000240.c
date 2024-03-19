#include<stdio.h>
 
int main(void) {
  unsigned long a;
  char b, b1, b2;
  scanf("%lu %c.%c%c", &a, &b, &b1, &b2);
  b -= '0'; b1 -= '0'; b2 -= '0';
  unsigned long ans = a * (unsigned long)b;
  unsigned long tmp = a * b1 + (a*b2)/10;
  tmp = tmp / 10;
  ans += (unsigned long)tmp;
  
  printf("%lu\n", ans);
  
  return 0;
}