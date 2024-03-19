#include <stdio.h>
#define ll long long int

int main(void) {
    ll l, r;
    int k, a = 2020;
    scanf("%lld%lld", &l, &r);
    if((r - l) >= 2019) {
        a = 0;
        printf("%d\n", a);
        return 0;
    }
    for(ll i = l; i < r  &&  i <= l+2019; i++) {
        for(ll j = i+1; j <= r  &&  j <= l+2019; j++) {
            if(i < j) {
                k = (i * j) % 2019;
                if(a > k) a = k;
            }
        }
    }
    printf("%d\n", a);
    return 0;
}
