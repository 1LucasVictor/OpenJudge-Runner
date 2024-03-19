#include<stdio.h>
#include<math.h>
int main()
{
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","w",stdout);


   long long num,d;
   int count=0;
 
   scanf("%lld",&num);
   scanf("%lld",&d);

   d = d * d;
   long long x,y;
   while (num--)
   {
      scanf("%lld %lld",&x,&y);
      x = (x*x) + (y*y);
      if(d >= x)
         count++;
      
   }
   
   printf("%d\n",count);
   

   
}