#include <stdio.h>

int main()
{
   int x,e;
   scanf("%d %d",&x, &e);

   if(e%2 == 0 && (x*2 <= e && e <= x*4))
      printf("Yes\n");
   else
      printf("No\n");

   return 0;
}
