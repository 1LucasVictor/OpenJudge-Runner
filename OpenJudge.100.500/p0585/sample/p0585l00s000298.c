#include<stdio.h>

int main(void) {
   int a;
   int b;
   int t;

   scanf("%d %d %d", &a, &b, &t);

   int sum = t / a * b;

   printf("%d\n", sum);

   return 0;
}
