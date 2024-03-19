#include<stdio.h>

int main(void)
{

   int a, b, c;

   scanf("%d%d", &a, &b);

   c = a * b;

   if(a < 10 && b < 10)
      printf("%d\n", c);

   else
      printf("-1\n");

   return 0;
}
