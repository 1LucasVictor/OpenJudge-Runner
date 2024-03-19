#include<stdio.h>

int main()
{
    long long int a,d,n;

    scanf(" %lld %lld",&d,&n);

    for(a=0;a<d;a++){
        n*=100;
    }
    printf("%lld\n",n);


    return 0;
}
