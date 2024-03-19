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
    long long l,r,ans=1e9;
    scanf("%lld%lld",&l,&r);
    if (r-l>=2019){
        ans=0;
    }
    l=l%2019;
    r=r%2019;
    if (l>=r){
        ans=0;
    }
    for (long long i=l; i<=r; i++){
        for (long long j=i+1; j<=r; j++){
            ans=min(ans,(i*j)%2019);
        }
    }
    printf("%lld\n",ans);
    return 0;
}