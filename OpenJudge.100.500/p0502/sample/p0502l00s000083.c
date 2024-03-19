#include<stdio.h>
int main()
{
    int n,i,even=0,count=0;
    scanf("%d",&n);
    int a[100];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)
    {
        if(a[i] % 2 ==0)
         {
             even++;
               if(a[i] % 3 ==0 || a[i] % 5 ==0)
               {
                   count++;
               }
         }
    }

        if(even==count)
           printf("APPROVED");
        else
        printf("DENIED");



   return 0;
}