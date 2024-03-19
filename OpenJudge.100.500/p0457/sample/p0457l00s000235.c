#include <stdio.h>
int main(void){
    int i, ii, iii, n, f = 0,tmp, tmp2, m, ans = 0;
    long long int k, A[200000], B[200000], a[200000], b[200000];
    scanf("%d%d%lld", &n, &m, &k);
    for (i = 0; i < n; i++)
        scanf("%lld", A + i);
    for (i = 0; i < m; i++)
        scanf("%lld", B + i);
    a[0] = A[0];
    b[0] = B[0];
    for (i = 1; i < n; i++)
        a[i] = a[i - 1] + A[i];
    for (i = 1; i < m; i++)
        b[i] = b[i - 1] + B[i];
        
    tmp = m - 1;
    for (i = 0; b[i] <= k && i < m; i++)
        ;
    ans = i - 2;
    for (i = 0; i < n; i++)
    {
        if (a[i] > k)
            break;
        for (ii = tmp; a[i] + b[ii] > k; ii--)
        {
            if (ii == 0)
            {
                f = 1;
                break;
            }
        }
        if (f)
        {
            ii = -1;
            if (ans < i + ii)
                ans = i + ii;
            tmp = 0;
        }
        else
        {                   
            tmp = ii;
            if (ans < i + ii)
                ans = i + ii;
                    
            
            if (tmp < 0)
                break;
        }
    }
    printf("%d", ans + 2);
}
