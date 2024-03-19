#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n, k;
    long long *a;
    long long sum = 0;
    long long ans;

    scanf("%lld%lld", &n, &k);

    a = calloc(n, sizeof(long long));

    long int i, j;

    for (i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    i = 0;

    while (sum < k && i < n) {
        sum += a[i++];
    }

    if (i == n)
        printf("0\n");

    else {
        ans = n - i + 1;

        for (j = 1; j < n - 1; j++) {
            sum -= a[j-1];
            while (sum < k && i < n) {
                sum += a[i++];
            }
            ans += n - i + 1;
        }

        printf("%lld\n", ans);
    }

    return 0;
}