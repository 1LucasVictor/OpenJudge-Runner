#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(void)
{
    int N;
    scanf("%i", &N);
    if (N % 10 == 7 || N / 10 % 10 == 7 || N / 100 % 10 == 7)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}