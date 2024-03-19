#include <stdio.h>

static long bitset;

enum kind
{
    S,
    H,
    C,
    D
};

long exists(enum kind k, int n)
{
    long bit;
    bit = 1l << (k * 13 + n);
    return bitset & bit;
}

void setbit(enum kind k, int n)
{
    long bit;
    bit = 1l << (k * 13 + n);
    bitset |= bit;
}

int main(void)
{
    int n, r, i;
    char c, buf[6];
    enum kind k;

    bitset = 0;
    fgets(buf, 6, stdin);
    sscanf(buf, "%d", &n);

    for (i = 0; i < n; ++i)
    {
        fgets(buf, 6, stdin);
        sscanf(buf, "%c %d", &c, &r);
        switch (c)
        {
        case 'S':
            k = S; break;
        case 'H':
            k = H; break;
        case 'C':
            k = C; break;
        case 'D':
            k = D; break;
        }
        setbit(k, r);
    }
    bitset = ~bitset;
    for (i = 1; i <= 52; ++i)
    {
        k = (i - 1) / 13;
        r = (i - 1) % 13 + 1;
        if (exists(k, r))
        {
            switch (k)
            {
            case S:
                printf("S %d\n", r); break;
            case H:
                printf("H %d\n", r); break;
            case C:
                printf("C %d\n", r); break;
            case D:
                printf("D %d\n", r); break;
            }
        }
    }
    return 0;
}

