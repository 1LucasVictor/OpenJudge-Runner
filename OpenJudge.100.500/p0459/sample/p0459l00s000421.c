#include <stdio.h>

int main()
{
   int x,e;
   scanf("%d %d",&x, &e);

   if(e%2 == 0 && (4*x == e || 2*x == e || (x-1)*2 + 4 == e))
      printf("Yes\n");
   else
      printf("No\n");

   return 0;
}
