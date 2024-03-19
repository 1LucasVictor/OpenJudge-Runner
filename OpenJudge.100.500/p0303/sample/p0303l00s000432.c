#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;   // 荷物の数
int k;   // トラックの台数
int w[100000] = {};  // それぞれの荷物の重さ

// 最大積載量Pのk台のトラックで何個の荷物が詰めるか
int check(int P) {
    int j = 0;
    int sum;

    for (int i = 0; i < k; i++) {
        sum = 0;
        while (sum + w[j] <= P) {
            sum += w[j];
            j++;
            if (j == n) return n;
        }
    }
    return j;
}

// 二分探索
int binarySearch() {
    int left = 0;
    int right = 10000 * 100000;  // 1つあたりの荷物の重さ * 荷物の最大量
    int mid;

    while(left < right) {
        mid = (left + right) / 2;
        int checkResult = check(mid);
        if (checkResult >= n) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return right;
}

int main(void)
{
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }

    int P = binarySearch();
    printf("%d\n", P);

    return 0;
}
