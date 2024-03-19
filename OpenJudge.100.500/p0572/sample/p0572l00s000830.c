#include <stdio.h>

long long min(long long a, long long b){
    return (a < b ? a : b);
}

int main(){
    long long L, R;
    scanf("%lld%lld", &L, &R);
    long long ans;
    if(R - L >= 2018 || L % 2019 == 0 || R % 2019 == 0) ans = 0;
    else{
        ans = 2018;
        for(long long i = L; i < R; i++){
            for(long long j = i + 1; j <= R; j++)
                ans = min(ans, (i * j) % 2019);
        }
    }
    printf("%lld\n", ans);
}