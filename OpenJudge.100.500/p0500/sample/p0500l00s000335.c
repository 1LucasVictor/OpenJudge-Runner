#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void)
{
    int ans[3];
    int n, m;
    rep(i, 3)
        ans[i] = -1;

    int flag = 1;
    scanf("%d%d", &n, &m);
    rep(i, m)
    {
        int s, c;
        scanf("%d%d", &s, &c);
        if (ans[s - 1] == -1 || ans[s - 1] == c)
            ans[s - 1] = c;
        else
            flag = 0;
    }
    if (n != 1 && ans[0] == 0)
        flag = 0;

    if (flag)
        rep(i, n)
        {
            if ((ans[i] == -1 && n == 1) || (ans[i] == -1 && i > 0))
                printf("0");
            else if (ans[i] == -1 && n != 1 && i == 0)
                printf("1");
            else
                printf("%d", ans[i]);
        }
    else
        printf("-1");
    printf("\n");

    return 0;
}