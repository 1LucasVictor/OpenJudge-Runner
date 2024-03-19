#include <stdio.h>
#include <stdlib.h>

#define MAX_P 100000 * 10000

typedef long long llong;

int isLoad(llong *ws, int n, int k, llong p)
{
    int i = 0, j, w_sum;

    for(j = 0; j < k; j++) {
        w_sum = 0;
        while(w_sum + ws[i] <= p) {
            w_sum += ws[i];
            i++;
            if(i == n) return n;
        }
    }
    return i;
}

llong getP(llong *ws, int n, int k)
{
    int v;
    llong left = 0;
    llong right = MAX_P;
    llong mid;
    while(right - left > 1) {
        mid = (left + right) / 2;
        v = isLoad(ws, n, k, mid);
        if(v >= n) right = mid;
        else left = mid;
    }

    return right;
}

int main(void)
{
    int i, n, k, w;
    llong ans, *ws;

    scanf("%d %d", &n, &k);
    ws = malloc(sizeof(llong) * n);
    for(i = 0; i < n; i++) {
        scanf("%d", &w);
        ws[i] = w;
    }
    ans = getP(ws, n, k);
    printf("%lld\n", ans);

    return 0;
}