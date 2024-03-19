#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i] % 2 ==0 && a[i]%3!=0 && a[i]%5!=0)
           {
               printf("DENIED");
               return 0;
           }
    }
    printf("APPROVED");



   return 0;
}