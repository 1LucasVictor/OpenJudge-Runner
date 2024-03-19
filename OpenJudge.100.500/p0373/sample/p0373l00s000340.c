#include <stdio.h>

void print_frame(int h, int w)
{
    int i, j, n, x;

    for (i = 1; i <= w; i++) //一行目に#を横幅分出力
    {
        putchar('#');
    }

    putchar('\n');

    for (j = 1; j <= h - 2; j++) //二行目から最終行-1行目まで#.....#を出力
    {
        for (n = 1; n <= w; n++)
        {
            if (n == 1)
            {
                putchar('#');
            }
            else if (n >= 2 && n < w)
            {
                putchar('.');
            }
            else if (n == w)
            {
                putchar('#');
            }
        }

        if (j < h - 2) //最終行-1行目のみ改行を出力しない
        {
            putchar('\n');
        }
        else
        {
        }
    }

    if (h > 2) //高さが2以下の時は改行を行わない
    {
        putchar('\n');
    }

    for (x = 1; x <= w; x++) //最終行に#を出力
    {
        putchar('#');
    }
    putchar('\n');
}

int main(void)
{
    int h, w;

    while (1)
    {
        scanf("%d %d", &h, &w);

        if (h == 0 && w == 0)
        {
            break;
        }
        else
        {
            print_frame(h, w);
            putchar('\n');
        }
    }

    return 0;
}
