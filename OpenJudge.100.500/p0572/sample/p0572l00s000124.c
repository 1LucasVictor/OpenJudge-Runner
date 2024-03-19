#include <stdio.h>

int main(void)
{
    int L, R, x;
    0 <= L < 2000000000;
    0 < R <= 2000000000;

    scanf("%d %d", &L, &R);
    if ((R - L) >= 2019)
    {
        printf("0\n");
        return 0;
    }
    int y = 2018;
    for (int i = L; i < R; i++)
    {
        for (int j = i + 1; j <= R; j++)
        {
            x = (i % 2019) * (j % 2019) % 2019;
            if (x < y)
            {
                y = x;
            }
        }
    }
    printf("%d", y);
    return 0;
}