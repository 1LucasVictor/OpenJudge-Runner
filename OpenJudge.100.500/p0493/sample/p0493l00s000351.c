#include<stdio.h>

int main(void){
    long x;
    scanf("%ld",&x);
    long long ans = 0;
    ans += (x / 500) * 1000;
    x %= 500;
    ans += (x / 5) * 5;
    printf("%lld",ans);
    return 0;
}