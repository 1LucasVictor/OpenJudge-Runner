#include <stdio.h>
#define N 200005
#define max(x,y) (x)>(y)?(x):(y)

int a[N], b[N];
int n, m;
int book(int k, int i, int j)
{
    int k1 = 0, k2 = 0;
    if(k < 0) return 0;
    if(i < n && k - a[i] >= 0) k1 = book(k - a[i], i + 1, j) + 1;
    if(j < m && k - b[j] >= 0) k2 = book(k - b[j], i, j + 1) + 1;

    return max(k1,k2);
}

int main()
{
    int k;
    int i, j, cnt = 0;

    scanf("%d%d%d", &n, &m, &k);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < m; i++) scanf("%d", &b[i]);
    printf("%d\n", book(k,0,0));

    return 0;
}