#include <stdio.h>

// 最大積載量がPのとき運べる荷物の数を求める
int loadable(int n, int k, int w[], int P) {
    int i;
    int j = 0;
    for (i = 1; i <= k; i++) {
        int sum = 0;
        while (sum + w[j] <= P) {
            sum += w[j];
            j++;
            if (j == n) {
                return j;
            }
        }
    }
    return j;
}

// 荷物をすべて運べる最小の最大積載量Pを求める
int min(int n, int k, int w[]) {
    int left = 0;
    int right = 100000 * 10000; // 確実に運べる積載量
    while (right - left > 1) {
        int mid = (left + right) / 2;
        if (loadable(n, k, w, mid) < n) {
            left = mid;
        } else {
            right = mid;
        }
    }
    return right;
}

int main(void) {
    int i, n, k;
    int w[100000];
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }
    printf("%d\n", min(n, k, w));
    return 0;
}

