#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

long long max(long long A,long long B){
    return A>B?A:B;
}

long long min(long long A,long long B){
    return A<B?A:B;
}

long long roundup(long long A,long long B){
    return (A+B-1)/B;
}

int main(void){
    long long n,a,b;
    scanf("%lld%lld%lld",&n,&a,&b);
    printf("%lld\n",min(a*n,b));
    return 0;
}