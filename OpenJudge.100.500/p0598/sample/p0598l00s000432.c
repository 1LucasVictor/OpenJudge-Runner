#include <stdio.h>

int main()
{
   int smallA;
   int bigB;
   int calcResult;
   int s;

   s = scanf("%d %d", &smallA, &bigB);
   if (s == EOF)
   {
      printf("Error!\n");
   }

   if (bigB % smallA == 0)
   {
      calcResult = smallA + bigB;
   }
   else
   {
      calcResult = bigB - smallA;
   }

   printf("%d", calcResult);

   return 0;
}