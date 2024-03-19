#include <stdio.h>

long long Euclid(long long x,long long y){
    if(x < y){
        long long tmp = x;
        x = y;
        y = tmp;
    }
    while(y){
        long long tmp = x % y;
        x = y;
        y = tmp;
    }
    return x;
}
int main(void){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",Euclid(a,b));
    return 0;
}
