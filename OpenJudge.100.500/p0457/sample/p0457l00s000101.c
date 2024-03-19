#include <stdio.h>
#define N 200005
#define max(x,y) (x)>(y)?(x):(y)

long long aa[N], bb[N];
int a[N], b[N];

int main()
{
    int n, m, k;
    int i, j, cnt = 0;

    scanf("%d%d%d", &n, &m, &k);
    for(i = 1; i <= n; i++) 
    {
        scanf("%d", &a[i]);
        if(aa[i - 1] + a[i] < 1e9) aa[i] = aa[i - 1] + a[i];
    }
    for(i = 1; i <= m; i++)
    {
        scanf("%d", &b[i]);
        if(bb[i - 1] + b[i] < 1e9) bb[i] = bb[i - 1] + b[i];
    }
    i = j = 1;
    while(k > 0 && i <= n && j <= m)
    {
        if(aa[i] < bb[j]) k -= a[i++];
        else k -= b[j++];
        if(k >= 0) cnt++;
    }
    while(k > 0 && i <= n)
    {
        k -= a[i++];
        if(k >= 0) cnt++;
    }
    while(k > 0 && j <= m)
    {
        k -= b[j++];
        if(k >= 0) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}