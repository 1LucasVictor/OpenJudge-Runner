#include <stdio.h>
#define N 200005

long long int a[N], b[N];
int main()
{
    int n, m, k;
    int i, j, cnt = 0;

    scanf("%d%d%d", &n, &m, &k);
    for(i = 0; i < n; i++) scanf("%lld", &a[i]);
    for(i = 0; i < m; i++) scanf("%lld", &b[i]);
    i = j = 0;
    while(k > 0 && (i < n || j < m))
    {
        if(i < n && a[i] < b[j]) k -= a[i++];
        else if(j < m) k -= b[j++];
        if(k >= 0) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}