#include<stdio.h>
int main()
{
   long int H, A, i, count=0;
   scanf("%ld %ld",&H, &A);
   for(i=0; ;i++)
   {
       H=H-A;
       count++;
       if(H<=0)
       {
           break;
       }
   }
   printf("%ld",count);
   return 0;
}
