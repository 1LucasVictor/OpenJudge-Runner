#include <stdio.h>

int main()
{
   int h,a,k=1;

   scanf ("%d%d", &h, &a);

   while ((h-a)>0)
    {

        h=h-a;
        k++;

    }


    printf("%d",k);
    return 0;


}
