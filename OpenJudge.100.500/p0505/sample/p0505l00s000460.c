#include<stdio.h>

int main()
{
    int m,n,i,sum=0;
    scanf("%d %d",&m,&n);
    int a[100005];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if(sum>=m)
       printf("Yes");
   else
       printf("No");

}