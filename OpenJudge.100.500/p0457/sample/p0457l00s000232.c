#include <stdio.h>

int max(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int bs(long long *arr, int n, long long val) {
    int l = 0, r = n-1, mid;

    while (r - l > 1) {
        mid = (r + l) >> 1;

        if (arr[mid] > val)
            r = mid;
        else
            l = mid;
    }
    if (arr[r] <= val)
        return r;
    if (arr[mid] <= val)
        return mid;
    if (arr[l] <= val)
        return l;
    return -1;
}

int main() {
    int n, m;
    long long k;
    long long aprefix[200000+7];
    long long bprefix[200000+7];

    scanf("%d %d %lld", &n, &m, &k);

    long long prev = 0, temp;
    for (int i=0; i < n; i++) {
        scanf("%lld", &temp);
        aprefix[i] = prev + temp;
        prev = aprefix[i];
    }
    prev = 0;
    for (int i=0; i < m; i++) {
        scanf("%lld", &temp);
        bprefix[i] = prev + temp;
        prev = bprefix[i];
    }
    int ans = 0;
    temp = bs(bprefix, m, k);
    if (temp != -1)
        ans = temp + 1;
    temp = bs(aprefix, n, k);
    if (temp != -1)
        ans = max(ans, temp + 1);

    for (int a=0; a < n; a++) {
        long long rem = k - aprefix[a];
        if (rem < 0)
            break;
        int b = bs(bprefix, m, rem);
        if (b != -1)
            ans = max(ans, a + 1 + b + 1);
    }

    printf("%d\n", ans);

    return 0;
}
