#include <stdio.h>

#define N_MAX (200000)

int main(void)
{
    long long x[N_MAX];
    long long y[N_MAX];
    long long N, D;
    int i;
    long long DD, xx, yy; 
    int cnt = 0;
 
    scanf("%ld %ld", &N, &D);
    for (i = 0; i < N; i++) {
        scanf("%ld %ld", &x[i], &y[i]);
    }

    DD = D * D;

    for (i = 0; i < N; i++) {
        xx = x[i] * x[i];
        yy = y[i] * y[i];
        if (DD >= xx + yy) {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}