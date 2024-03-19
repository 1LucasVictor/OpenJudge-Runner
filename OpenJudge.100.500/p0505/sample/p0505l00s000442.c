#include<stdio.h>
int main()
{
    int H,A,count=0;
    scanf("%d%d",&H,&A);
    int ara[A];
    for(int i=0;i<A;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(int j=0;j<A;j++)
    {
        count=count+ara[j];
    }
    if(count>=H)
    {
        printf("Yes\n");
    }
    else
    printf("No\n");
    return 0;
}
