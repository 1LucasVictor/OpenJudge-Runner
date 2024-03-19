#include <stdio.h>

int main(void) {

    int i, n;
    long long a, min, max, sum;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lld", &a);
        if (i == 0) {
            min = a;
            max = a;
            sum = a;
        } else {
            if (a < min) {
                min = a;
            }
            if (a > max) {
                max = a;
            }
            sum += a;
        }
    }

    printf("%lld %lld %lld\n", min, max, sum);

    return 0;

}