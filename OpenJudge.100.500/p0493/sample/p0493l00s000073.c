#include <stdio.h>

int main()
{
  long int x, ans = 0;
  /*int a = 1000000000;
  int b;
  int i = 0;
  int c[8];*/
  int y, z;
  scanf("%ld", &x);
  y = x / 500;
  x = x - y * 500;
  z = x / 5;
  printf("%ld\n", y * 1000 + z * 5);
  
  return 0;
}