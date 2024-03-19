#include <stdio.h>
#include <stdlib.h>

int main()
{
   int h,a;
   int i=0;
   scanf("%d %d",&h,&a);

   while(h>0)
   {
       h=h-a;
       i=i+1;
   }
   printf("%d",i);

    return 0;
}
