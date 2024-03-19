#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, p, n, k, k_tmp, w, w_sum = 0, p_tmp, p_pr = 10000;
    int *ws;

    scanf("%d %d", &n, &k);
    ws = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++) {
        scanf("%d", &w);
        w_sum += (ws[i] = w);
    } 
    p = w_sum / k + w_sum % k;
    w_sum = 0;
    k_tmp = k;
    do {
        p_tmp = -1;
        w_sum = 0;
        for(i = 0; k_tmp > 1; i++) {
            w_sum += ws[i];
            if(w_sum == p) {
                k_tmp--;
                p_tmp = p_tmp < w_sum ? w_sum : p_tmp;
                w_sum = 0;
            } else if(w_sum > p) {
                k_tmp--;
                p_tmp = p_tmp < w_sum - ws[i] ? w_sum - ws[i] : p_tmp;
                i--;
                w_sum = 0;
            }
        }
        for(; i < n; i++) w_sum += ws[i];
        p_tmp = p_tmp < w_sum ? w_sum : p_tmp;

        if(p_tmp == p) {
            printf("%d\n", p);
            return 0;
        }
        if(p_tmp < p_pr)
            p_pr = p_tmp;
        k_tmp = k;
    } while(++p < p_pr);
    printf("%d\n", p_pr);

    return 0;
}