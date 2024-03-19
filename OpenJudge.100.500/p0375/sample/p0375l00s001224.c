#include<stdio.h>
int main()
{
    int i,n,x[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        if(x[i]%3==0)
        {
            printf(" %d",x[i]);
        }
        else if(x[i]%10==3)
        {
            printf(" %d",x[i]);
        }
        else if(29<(x[i]%100) && 40>(x[i]%100))
        {
            printf(" %d",x[i]);
        }
        else if(299<(x[i]%1000) && 400>(x[i]%1000))
        {
            printf(" %d",x[i]);
        }
        else if(2999<(x[i]%10000) && 4000>(x[i]%10000))
        {
            printf(" %d",x[i]);
        }
    }
    printf("\n");
    return 0;
}
