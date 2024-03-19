#include <stdio.h>

int main(void) {
    long long N, K, a, b;
    scanf("%lld%lld", &N, &K);
    a=N%K; b=K-a;
    if (a<b) printf("%lld", a);
    else printf("%lld", b);
    return 0;
}
