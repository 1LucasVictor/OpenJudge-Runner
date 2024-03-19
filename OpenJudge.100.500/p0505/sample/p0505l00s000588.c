#include <stdio.h>
int main()
{
   int h,n,a[100000],k,sum=0,i;
   scanf("%d",&h);
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
   k=sum-h;
   if(k<0)
    printf("No");
   else
   {
       for(i=0;i<n;i++)
       {
           if(a[i]==k)
            printf("Yes");
       }
   }
   return 0;
}


