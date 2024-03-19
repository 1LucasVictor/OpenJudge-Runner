#include <stdio.h>
#define N 200005

int a[N], b[N];
int main()
{
    long long k;
    int n, m;
    int i, j, cnt = 0;

    scanf("%d%d%lld", &n, &m, &k);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < m; i++) scanf("%d", &b[i]);
    i = j = 0;
    while(k > 0 && i < n && j < m)
    {
        if(a[i] < b[j]) k -= a[i++];
        else k -= b[j++];
        if(k >= 0) cnt++;
    }
    while(k > 0 && i < n) 
    {
        k -= a[i++];
        if(k >= 0) cnt++;
    }
    while(k > 0 && j < m)
    {
        k -= b[j++];
        if(k >= 0) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}