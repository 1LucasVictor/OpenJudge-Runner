#include <stdio.h>

int main()
{
   int a[100],b[100],c,d,n;
   scanf("%d",&n);
   for (c=0;c<n;c++)
   {
      scanf("%d",&a[c]);
   }
   for (c=n-1,d=0;c>=0;c--,d++)
   {
      b[d]=a[c];
   }
   for (c=0;c<n; c++)
   {
      a[c]=b[c];
   }
   for (c=0;c<n;c++)
   {
       if(c<(n-1))
      printf("%d ",a[c]);
       else
       printf("%d\n",a[c]);
   }
   return 0;
}

