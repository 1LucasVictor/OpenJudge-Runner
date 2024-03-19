#include <stdio.h>

static int n;
static int k;
static int w[100000];

static int check(int P)
{
    int i = 0;

    for (int j = 0; j < k; j++) {
        for (int s = 0; s + w[i] <= P;) {
            s += w[i];
            i++;
            if (i == n)
                return n;
        }
    }

    return i;
}

static int solve()
{
    int left = 0;
    int right = 100000 * 10000;

    while (right > left) {
        int mid = (left + right) / 2;
        int v = check(mid);
        if (v >= n) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return right;
}

int main()
{
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &w[i]);
    }

    int ans = solve();
    printf("%d\n", ans);
}
