#include <stdio.h>

int main(void){
    long a, b, c, k;
    long ans = 0;

    scanf("%ld%ld%ld%ld", &a, &b, &c, &k);
    if(a > k){
        ans = k;
        k = 0;
    }else{
        ans = a;
        k -= a;
    }
    if(k > 0){
        if(b > k){
            k = 0;
        }else{
            k -= b;
        }
    }
    if(k > 0) ans -= k;
    printf("%ld", ans);
    return 0;
}
