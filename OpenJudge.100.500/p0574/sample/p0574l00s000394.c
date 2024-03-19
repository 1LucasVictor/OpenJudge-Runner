#include <stdio.h>
 
int main()
{
   int s,a,b,c,d;
   scanf("%d",&s);
   a=s%10;
   s=s/10;
   b=s%10;
   s=s/10;
   c=s%10;
   s=s/10;
   d=s%10;
   s=s/10;
   if(a==b  || b==c || c==d )
   {
       printf("Bad\n");
   }
   else
   {printf("Good\n");}
    
    return 0;
}
