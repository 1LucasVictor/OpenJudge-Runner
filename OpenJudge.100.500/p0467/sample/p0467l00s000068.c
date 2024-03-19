#include <stdio.h>
int main(void){
    long long a;
    long long b;
    long long c;
    long long k;
    int i, ans = 0;
    
    scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
    
    for(i = 0; i < k; i++){
        if(a > 0){
            ans = ans + 1;
            a = a - 1;
        }else if(b > 0){
            ans = ans + 0;
            b = b - 1;
        }else if(c > 0){
            ans = ans - 1;
            c = c - 1;
        }
    }
    printf("%d\n", ans);
}
