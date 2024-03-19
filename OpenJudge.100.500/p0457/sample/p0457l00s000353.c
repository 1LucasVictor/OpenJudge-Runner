#include <stdio.h>
#define N 200005

int main()
{
    int n, m, k;
    long long int a[N] = {0}, b[N] = {0};
    int i, j, cnt = 0;

    scanf("%d%d%d", &n, &m, &k);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < m; i++) scanf("%d", &b[i]);
    i = j = 0;
    while(k >= 0 && (i < n || j < m))
    {
        if(i < n && a[i] < b[j]) k -= a[i++];
        else if(j < m) k -= b[j++];
        if(k >= 0) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}