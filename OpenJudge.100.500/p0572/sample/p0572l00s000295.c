#include<stdio.h>
#include<math.h>
int main(){
    long long l, r, i, j, k, s;
    long long min = 10000000;
    long long mod = 2019;
    scanf("%lld %lld", &l, &r);
    for(i = l; i < r; i++){
        for(j = i + 1; j <= r; j++){
            if(i%mod > min || j%mod > min)break;
            s = (i%mod)*(j%mod);
            if(min > s) min = s;
        }
    }
    printf("%lld\n", min);
    return 0;
}