#include<stdio.h>
#include<math.h>
int main()
{
   long long int n,d,i,x,y,count=0;
   double result;

   scanf("%lld %lld",&n,&d);

   for(i=0;i<n;i++)
   {

       scanf("%lld %lld",&x,&y);

       result = sqrt((x*x)+(y*y));

       if(result<=d)
       {
           count++;
       }
   }
   printf("%lld\n",count);
   return 0;
}