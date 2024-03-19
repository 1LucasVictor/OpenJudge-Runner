#include<stdio.h>
int main()
{
    int k,a,b,i=1,m=1;
    scanf("%d%d%d",&k,&a,&b);
    while (k*i<=b)
    {
        if((k*i)>=a && (k*i)<=b)
        {
            printf("OK\n");
            return 0;
        }
        i++;
    }
    printf("NG\n");
    
}