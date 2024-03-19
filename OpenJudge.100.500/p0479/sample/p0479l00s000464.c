#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
   int n,i,j,k;
   int a[200100],b[200100];
   scanf("%d",&n);


   for(i=0;i<n;i++)
   {
       b[i]=0;
   }

   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       b[a[i]-1] += 1;
   }

   for(i=0;i<n;i++)
   {
       printf("%d\n",b[i]);
   }

return 0;
}