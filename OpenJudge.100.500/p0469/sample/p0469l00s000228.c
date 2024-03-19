#include<stdio.h>
int main()
{
    int k,a,b,flag;
    long long i;


    scanf("%d %d %d",&k,&a,&b);
    flag=0;
    for(i=k; i<=b; i=i+k)
    {
        if(i>=a&&i<=b)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
        printf("OK\n");
    else
        printf("NG\n");
    return 0;
}
