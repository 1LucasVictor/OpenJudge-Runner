#include <stdio.h>
#include <stdlib.h>

int main()
{
   int h,n;
   int a[100000];
   int i;
   int sum=0;
   scanf("%d %d",&h,&n);
   for (i=0;i<n;i++)
    scanf("%d",&a[i]);
   
   for (i=0;i<n;i++)
    sum=sum+a[i];
   
   if (sum<h)
    printf("No\n");
   else
    printf("Yes\n");
    return 0;
}
