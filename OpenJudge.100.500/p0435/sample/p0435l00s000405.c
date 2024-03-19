#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int N, D;
    scanf("%i %i", &N, &D);
    int X[N];
    int Y[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%i %i", &X[i], &Y[i]);
    }
    int counter = 0;
    for (int i = 0; i < N; i++)
    {
        if ((long long)X[i] * X[i] + (long long)Y[i] * Y[i] <= (long long)D * D)
        {
            counter++;
            // printf("+");
        }
    }
    printf("%i\n", counter);
}