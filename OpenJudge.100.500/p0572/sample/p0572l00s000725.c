#include<stdio.h>
#include<math.h>
int main(){
    long long l, r, i, j, k, s;
    long long min = 10000000;
    long long mod = 2019;
    scanf("%lld %lld", &l, &r);
    for(i = l; i < r; i++){
        if(i%mod > min)continue;
        for(j = i + 1; j <= r; j++){
            s = (i*j)%mod;
            if(min > s) min = s;
        }
    }
    printf("%lld\n", min);
    return 0;
}
