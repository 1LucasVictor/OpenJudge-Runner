#include <stdio.h>
int main(void) {
    long long a, bf, bb;
    scanf("%lld %lld.%lld", &a, &bf, &bb);
    if (a == 0 || (bf == 0 && bb == 0)) {
        printf("0\n");
        return 0;
    }

    const long long q = 1000000000;  // 1e9

    long long af = a / q, ab = a % q;

    af *= (bf * 100L + bb);
    ab *= (bf * 100L + bb);
    ab += (af % 100L) * q;

    af /= 100L;
    ab /= 100L;

    if (af == 0L)
        printf("%lld\n", ab);
    else
        printf("%lld%09d", af, ab);

    return 0;
}