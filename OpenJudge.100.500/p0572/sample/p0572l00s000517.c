#include <stdio.h>
#include <math.h>
#define ll long long

long long calc (long long a, long long b){
    return (a * b) % 2019;
}

int main(){
    ll a, b, min = 1000000000;
    scanf("%lld %lld", &a, &b);
    if (a * b < 2019){
        printf("%lld\n", a * b);
        return 0;
    } else if ((a * b % 2019 == 0) || (floor(a/2019) != floor(b/2019))){
        printf("0\n");
        return 0;
    } else {
        for (long long i = a; i < b; i++) {
            for (long long j = a + 1; j <= b; j++){
                if (calc(i, j) < min)
                    min = calc(i, j);
            }
        }
        printf("%lld\n", min);
        return 0;
    }
}