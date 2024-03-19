#include<stdio.h>
int main()
{
    int H,N,i,sum=0;
    int a[100];
    scanf("%d%d",&H,&N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if (sum<H)
    {
        printf("No");
    }
    else
        printf("Yes");
    return 0;
}
