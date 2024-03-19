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
    for (i = mx; ;i++) {
        int j, e = k;
        sum = 0;
        for (j = 0; j < n; j++) {
            if (n - j == e) {
                printf("%d\n", i);
                return 0;
            }
            if (sum + ws[j] > i) {
                e--;
                if (e == 0) {
                    if (j + 1 == n) {
                        printf("%d\n", i);
                        return 0;
                    } else {
                        break;
                    }
                }
                sum = 0;
            }
            sum += ws[j];
        }
    }
    return 0;
}
