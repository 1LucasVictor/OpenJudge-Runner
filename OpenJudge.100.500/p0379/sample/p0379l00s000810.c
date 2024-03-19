#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    int *avalues = (int *)malloc(sizeof(int) * n * m);
    for (int i = 0, end = n * m; i < end; ++i)
    {
        int value;
        scanf("%d", &value);
        avalues[i] = value;
    }
    int *bvalues = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; ++i)
    {
        int value;
        scanf("%d", &value);
        bvalues[i] = value;
    }
    for (int i = 0; i < n; ++i)
    {
        long value = 0;
        for (int j = 0; j < m; ++j)
        {
            value += avalues[m * i + j] * bvalues[j];
        }
        printf("%ld\n", value);
    }
    free(avalues);
    free(bvalues);
    return 0;
}

