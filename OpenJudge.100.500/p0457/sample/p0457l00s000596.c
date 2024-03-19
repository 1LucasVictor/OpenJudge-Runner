#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 200010
#define MAX 1000000000000000000

int main (void)
{
    long long n, m, k, a[N], b[N];
    long long i, j, sum = 0, tmp = 0, l;

    scanf("%lld %lld %lld", &n, &m, &k);

    for (i = 0; i < n; i++) {
        scanf("%lld", &(a[i]));
    }

    for (j = 0; j < m; j++) {
        scanf("%lld", &(b[j]));
    }

    a[n] = 0;
    b[m] = 0;

    i = 0;
    j = 0;
    while (sum + tmp <= k) {
        sum += tmp;
        tmp = 0;

        if (i == n && j == m) {
            printf("%lld", n + m);
            return 0;
        }

        if (i == n) {
            tmp = b[j];
            j++;
        } else if (j == m) {
            tmp = a[i];
            i++;
        } else if (a[i] == b[j]) {
            l = 0;
            while (a[i + l] != b[j + l]) {
                l++;
                if (a[i + l] == 0 && b[j + l] == 0) break;
            }
            if (a[i + l] > b[j + l]) {
                tmp = b[j];
                j++;
            } else {
                tmp = a[i];
                i++;
            }
        } else if (a[i] < b[j]) {
            tmp = a[i];
            i++;
        } else {
            tmp = b[j];
            j++;
        }
    }

    printf("%lld", i + j - 1);

    return 0;
}
