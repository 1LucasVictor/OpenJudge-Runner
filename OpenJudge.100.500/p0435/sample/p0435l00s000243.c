#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long N, D;
    scanf("%lu %lu", &N, &D);

    unsigned long D2 = D * D;

    unsigned long c = 0;
    for (size_t i = 0; i < N; i++)
    {
        long x, y;
        scanf("%ld %ld", &x, &y);
        if (x * x + y * y <= D2)
        {
            c++;
        }
    }

    printf("%lu\n", c);

    return 0;
}
