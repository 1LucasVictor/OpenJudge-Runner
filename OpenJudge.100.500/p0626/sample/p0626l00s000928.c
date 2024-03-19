#include<stdio.h>
int main()
{
    int n,d,i,j;
    scanf("%d %d",&d,&n);
    if(d==0)
    {
        if(n!=100)
            printf("%d\n",n);
        else
            printf("101\n");
    }
    else if(d==1)
    {
        if(n!=100)
            printf("%d\n",n*100);
        else
            printf("10100\n");
    }
    else
    {
        if(n!=100)
            printf("%d\n",n*10000);
        else
            printf("1010000\n");
    }
    return 0;
}
