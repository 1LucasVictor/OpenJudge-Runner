#include <stdio.h>

int main() {
    long long d;
    int n, i, count = 0;
    int x[200000];
    int y[200000];

    scanf("%d %lld", &n, &d);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    for(i = 0; i < n; i++) {
        if(((long long)x[i] * x[i]) + ((long long)y[i] * y[i]) <= (long long)d * d) count++;
    }

    printf("%d", count);

    return 0;
}