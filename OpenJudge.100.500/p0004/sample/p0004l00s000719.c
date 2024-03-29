#include <stdio.h>

int gcd(int a, int b)
{
  if (b == 0){
   return (a);
  }
  return (gcd(b, a % b));
}

int main(void)
{
  int a, b;

  while (scanf("%d%d", &a, &b) != EOF){
    if (a < b){
      a ^= b;
      b ^= a;
      a ^= b;
   }
   printf("%d %d\n", gcd(a, b), (a / gcd(a, b)) * b);
 }

 return (0);
}