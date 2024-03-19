#include<stdio.h>
int main()
{
    long long a, b, c, k, sum, x;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&k);

    if(k <= a){
        sum = a;
    }

    else if( k <= (a + b)){
        sum = a;
    }

    else if( k <= (a + b + c)){
        x = k - (a + b);
        sum = a - x;
    }

    printf("%lld\n",sum);

    return 0;
}
