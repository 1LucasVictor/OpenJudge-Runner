#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    int sc[5][2];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &sc[i][j]);
        }
    }
    int x = 0, tmp = 0;
    bool f1 = false, f2 = false, f3 = false;
    for (int i = 0; i < M; i++)
    {
        tmp = sc[i][1];
        if (sc[i][0] == 1 && tmp == 0)
        {
            break;
        }
        if (sc[i][0] == 1 && (tmp < (x / 100) % 10 || f1 == false))
        {
            x = x - (x / 100) % 10 * 100 + tmp * 100;
            tmp = 0;
            if (f1 == false)
            {
                x += 100 * tmp;
                f1 = true;
            }
        }
        else if (sc[i][0] == 2 && (tmp < (x / 10) % 10 || f2 == false))
        {
            x = x - (x / 10) % 10 * 10 + tmp * 10;
            tmp = 0;
            if (f2 == false)
            {
                x += 10 * tmp;
                f2 = true;
            }
        }
        else if (sc[i][0] == 3 && (tmp < x % 10 || f3 == false))
        {
            x = x - x % 10 + tmp;
            tmp = 0;
            if (f3 == false)
            {
                x += tmp;
                f3 = true;
            }
        }
    }
    if (x < 100)
    {
        printf("-1");
    }
    else
    {
        printf("%d", x);
    }
    return 0;
}
