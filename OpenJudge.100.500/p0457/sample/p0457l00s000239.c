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
    for(int i = 1; i <= n; i++)
    {
        int left = 0, right = m + 1, mid, temp;
        temp = aa[i];
        while(left < right)
        {
            mid = (left + right) >> 1;
            if(temp > aa[i] + bb[mid]) left = mid + 1;
            else if(temp < aa[i] + bb[mid]) right = mid - 1;
            else break;
        }
        if(max < mid + i) max = mid + i;
    }
    printf("%d\n", max);

    return 0;
}