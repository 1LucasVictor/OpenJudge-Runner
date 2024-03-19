#include<stdio.h>
int main()
{
    int k,a,b,i,j=0;
    scanf("%d%d%d",&k,&a,&b);
    i=a;
    while(i==a||i!=b||i==b)
    {
        if(i%k==0)
        {
            j=1;
            break;
        }
        i++;
    }
    if(j==1)
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }
    return 0;
}
