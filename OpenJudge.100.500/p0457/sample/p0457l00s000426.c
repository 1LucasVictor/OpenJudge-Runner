#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n, m, k, i, j, cnt = 0;

    scanf("%lld %lld %lld", &n, &m, &k);
    long long a[n+1], b[m+1];

    a[n] = b[m] = INFINITY;

    for(i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for(i = 0; i < m; i++)
        scanf("%lld", &b[i]);

    i = 0;
    j = 0;
    while(1)
    {
        if(a[i] > k && b[j] > k)
            break;
        cnt++;

        if(i < n && a[i] < b[j])
        {
            k -= a[i];
            i++;
        }
        else if(j < m && b[j] < a[i])
        {
            k -= b[j];
            j++;
        }

        if(k < 0)
        {
            cnt--;
            break;
        }

        if(i == n && j == m)
            break;
    }

    printf("%lld", cnt);

    return 0;
}
