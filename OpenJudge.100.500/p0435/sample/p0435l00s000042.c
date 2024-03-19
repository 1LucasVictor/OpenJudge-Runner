#include<stdio.h>
#include<math.h>

int main(void)
{
   int n, d, x[200000], y[200000], i, a=0;
   double z;

   scanf("%d%d",&n,&d);
   for(i=0;i<n;i++)
      scanf("%d%d",&x[i],&y[i]);

   for(i=0;i<n;i++){
      z=sqrt(pow(x[i],2.0)+pow(y[i],2.0));
      if(z<=d)
         a++;
   }

   printf("%d\n",a);
   return 0;
}