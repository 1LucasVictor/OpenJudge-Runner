#include <stdio.h>

int main(void)
{
   int a,b;
   int ans;
   int result;

   scanf("%d %d", &a, &b);

   if (a > b)
   {
      ans = a - b;
   }

   else
   {
      ans = b - a;
  }
    
   if (ans % 2 == 0 && ans < a){
      result = a - (ans / 2);
   }

   else if(ans % 2 == 0 && ans > a){
      result = a + (ans / 2);
   }

   else {
      printf("INPOSSIBLE\n");
      return 0;
   }

   printf("%d\n", result);

   return 0;
}