#include <stdio.h>
#include <tgmath.h>

int main()
{
   int x,e;
   scanf("%d %d",&x, &e);

   if(e%4 == 2 || e%4 ==0)
      printf("Yes\n");
   else
      printf("No\n");

   return 0;
}
