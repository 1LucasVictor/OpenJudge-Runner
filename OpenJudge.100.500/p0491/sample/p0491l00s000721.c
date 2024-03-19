#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long long int N,K;
    long int y,x;



    scanf("%llu%llu",&N,&K);



    x=N%K;

    y=abs(x-K);
    if(y<x)
        printf("%d\n",y);
    else
        printf("%d\n",x);

    return 0;
}
