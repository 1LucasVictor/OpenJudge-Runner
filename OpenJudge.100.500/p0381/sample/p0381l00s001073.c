#include <stdio.h>

int main()
{
    int n, m;
    while (scanf("%d%d", &n, &m), n)
    {
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int k = m - i - j;
                if (j < k && k <= n)
                    ans++;
            }
        }
        printf("%d\n", ans);
    }
}

