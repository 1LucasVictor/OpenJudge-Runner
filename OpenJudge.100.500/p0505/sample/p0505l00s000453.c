#include <stdio.h>
typedef long long ll;

int main(void) {
    ll H, N;
    scanf("%lld%lld", &H, &N);

    ll ASum = 0;
    for(ll i = 0; i < N; ++i) {
        ll tmp;
        scanf("%lld", &tmp);
        ASum += tmp;
    }
    
    if(ASum >= H) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}