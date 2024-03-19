#include <stdio.h>
#define ll long long

ll f(ll p, int key, int *w, int n) {
    int i = 0;
    int v = 0;
    int t = 0;
    ll sum = 0;
    for (i = 0; i < n; i++) {
        if (sum + w[i] <= p) {
            sum += w[i];
            v++;
        } else {
            if (sum > 0) t++;
            else return v;
            if (t >= key) return v;
            sum = 0;
            if (w[i] <= p) {
                sum += w[i];
                v++;
            } else return v;
        }
    }
    return v;
}

ll binarySearch(int key, int *w, int n, ll left, ll right) {
    if (right < left) return 0;
    ll mid = (left + right) / 2;
    ll vc1 = f(mid, key, w, n);
    ll vc2 = f(mid-1, key, w, n);
    if (vc1 == n) {
        if (vc2 < n) return mid;
        else if (vc2 == n) return binarySearch(key, w, n, left, mid-1);
    }
    else return binarySearch(key, w, n, mid+1, right);
}

int main(void) {
    int n, k, i;
    ll P;
    scanf("%d %d", &n, &k);
    int w[n];
    ll b = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &w[i]);
        b += w[i];
    }

    P = binarySearch(k, w, n, 1, b);

    printf("%lld\n", P);
    return 0;

}
