/* AOJ My Practice
 * author: Leonardone @ NEETSDKASU
 */
#include <stdio.h>

int ws[100000] = {0};

int main(void) {
    int n, k, w, i, mx = 0, sum = 0;
    scanf("%d %d", &n, &k);
    if (k > n) { k = n; }
    for (i = 0; i < n; i++) {
        scanf("%d", &w);
        ws[i] = w;
        sum += w;
        if (w > mx) { mx = w; }
    }
    sum = (sum + k - 1) / k;
    if (sum > mx) { mx = sum; }
    w = mx * (n / k);
    while (mx < w) {
        i = (w - mx) / 2 + mx;
        int j, e = k;
        sum = 0;
        for (j = 0; j < n; j++) {
            if (sum + ws[j] > i) {
                e--;
                if (e == 0) {
                    break;
                }
                sum = 0;
            }
            sum += ws[j];
        }
        if (j == n) {
            w = i;
        } else {
            mx = i + 1;
        }
    }
    printf("%d\n", mx);
    return 0;
}
