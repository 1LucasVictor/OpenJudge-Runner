#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void)
{
    int ans[3] = {0};
    int n, m;
    int sc[6][10] = {0};

    scanf("%d%d", &n, &m);
    rep(i, m)
    {
        int s, c;
        scanf("%d%d", &s, &c);
        sc[s][c] = 1;
    }

    if (n != 1 && sc[1][0] == 1)
    {
        puts("-1");
        return 0;
    }

    int ansCnt = 0;
    for (int i = 1; i <= 5; i++)
    {
        int cnt = 0;
        int tmp = 0;
        rep(j, 10)
        {
            if (sc[i][j] == 1)
            {
                cnt++;
                tmp = j;
            }
            if (i > n && sc[i][j] == 1)
                cnt = 100100100;
        }

        if (cnt > 1)
        {
            puts("-1");
            return 0;
        }
        else
            ans[ansCnt++] = tmp;
    }

    rep(i, n)
    {
        if (n != 1 && i == 0 && ans[0] == 0)
            printf("1");
        else
            printf("%d", ans[i]);
    }

    return 0;
}