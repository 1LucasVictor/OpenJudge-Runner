#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=1;i<=9;i++)
    {
    for(j=9;j>=1;j--)
    {
        if((i*j)==n)
            count++;

    }
    }
    if(count>0)
        printf("Yes");
    else printf("No");

    return 0;
}