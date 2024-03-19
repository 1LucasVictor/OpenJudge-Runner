#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <tgmath.h>
#include <time.h>
#define ll long long
#define min(a, b) ((a) > (b) ? (b) : (a))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define miin(a, b, c) min((a), min((b), (c)))
#define maax(a, b, c) max((a), max((b), (c)))
#define mod 1000000007

int n, m, nyaa[9] = {-1, -1, -1, -1}, a, b;

main()
{
    scanf("%d%d", &n, &m);
    while (m--)
    {
        scanf("%d%d", &a, &b);
        a--;
        if (nyaa[a] < 0)
            nyaa[a] = b;
        else
        {
            if (nyaa[a] != b)
            {
                puts("-1");
                return 0;
            }
        }
    }
    if (nyaa[0] == 0)
    {
        puts("-1");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (nyaa[i] < 0)
        {
            putchar(49 - (i > 0));
        }
        else
        {
            putchar(48 + nyaa[i]);
        }
    }
    putchar(10);
    return 0;
}