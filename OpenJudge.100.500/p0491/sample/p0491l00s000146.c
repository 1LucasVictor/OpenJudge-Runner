#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long long int N,K,x;
    long long int y;

    scanf("%llu%llu",&N,&K);
    x=N;
    if(N>0 && K==1)
        printf("0\n");
    else
    {
        x=N%K;
        y=abs(x-K);
        if(y<x)
            printf("%d",y);
        else
            printf("%d",x);

    }
    return 0;
}
