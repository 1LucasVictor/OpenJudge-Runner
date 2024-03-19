#include<stdio.h>
int main()
{
    int d,n,x;
    scanf("%d %d",&d,&n);
    if(d==0)
    {
        if(n==100)
            printf("\n");
        else
            printf("%d\n",n);
    }
    else if(d==1)
    {
        if(n==100)
            printf("9901\n");
        else
            printf("%d\n",n*100);
    }

    else if(d==2)
    {
        if(n==100)
            printf("990001\n");
        else
            printf("%d\n",n*10000);
    }
    return 0;
}