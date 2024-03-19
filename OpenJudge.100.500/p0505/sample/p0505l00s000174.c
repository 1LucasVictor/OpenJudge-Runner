#include<stdio.h>

int main()
{
    int m,n,i,sum=0;
    scanf("%d %d",&m,&n);
    int a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    if(sum>=m)
       printf("Yes");
   else
       printf("No");

}