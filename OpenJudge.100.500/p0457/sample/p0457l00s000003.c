#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n, m, k, i, j, in, mx, cnt = 0;

    scanf("%lld %lld %lld", &n, &m, &k);
    long long a[n+1], b[m+1];

    a[0] = b[0] = 0;

    for(i = 1; i <= n; i++)
    {
        scanf("%lld", &in);
        a[i] = a[i-1] + in;
    }
    for(i = 1; i <= m; i++)
    {
        scanf("%lld", &in);
        b[i] = b[i-1] + in;
    }

    for(i = 1; i <= n; i++)
    {
        if(a[i] > k)
            break;
        cnt++;
    }

    i--;
    j = 1;
    mx = cnt;

    while(1)
    {
        if(i > 0 && a[i] + b[j] > k)
        {
            i--;
            cnt--;
            if(cnt < 0)
                cnt = 0;
        }
        else if(j <= m && a[i] + b[j] <= k)
        {
            j++;
            cnt++;

            if(cnt > mx)
                mx = cnt;
        }

        if(j > m)
            break;

        if(i == 0 && b[j] > k)
            break;
    }

    printf("%lld", mx);

    return 0;
}
