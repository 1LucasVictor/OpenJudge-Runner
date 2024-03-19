#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long long int N,K,x;
   unsigned  long long int y;



    scanf("%llu%llu",&N,&K);
    if(N==0)
        printf("%d",K);


        x=N%K;

        y=abs(x-K);
        if(y<x)
            printf("%d\n",y);
        else
            printf("%d\n",x);

    return 0;
}
