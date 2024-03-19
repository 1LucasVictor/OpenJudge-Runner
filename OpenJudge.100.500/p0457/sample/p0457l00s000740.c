#include <stdio.h>
#define N 200005

typedef long long ll;

ll a[N], b[N], aa[N], bb[N];
int main()
{
    ll n, m, k;

    scanf("%lld%lld%lld", &n, &m, &k);
    for(int i = 1; i <= n; i++) scanf("%lld", &a[i]), aa[i] += aa[i - 1] + a[i];
    for(int i = 1; i <= m; i++) scanf("%lld", &b[i]), bb[i] += bb[i - 1] + b[i];

    int max = 0;
    for(int i = 0; i <= n; i++)
    {
        int left = 0, right = m + 1, mid, temp;
        if(aa[i] <= k) temp = aa[i];
        else break;
        while(right - left > 1)
        {
            mid = (left + right) >> 1;
            if(k < temp + bb[mid]) right = mid;
            else left = mid;
        }
        if(max < left + i) max = left + i;
    }
    printf("%d\n", max);

    return 0;
}