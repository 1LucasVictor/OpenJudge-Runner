#include <stdio.h>

int main(void)
{
    int i, n, k, w, p, w_sum = 0;

    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++) {
        scanf("%d", &w);
        w_sum += w;
    }
    p = w_sum % k ? w_sum / k + 1 : w_sum / k;
    printf("%d\n", p);
    return 0;
}