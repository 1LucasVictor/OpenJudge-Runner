#include <stdio.h>

int main()
{
    int x[2];

    for (int s = 0; s < 2; s++)
    {
        scanf("%d", &x[s]);
    }

    for (int v = 0; v < x[0]; v++)
    {
        if (x[1] == ((x[0]-v) * 2 + v * 4))
        {
            printf("Yes");
            return 0;
        }
    }
    printf("NO");
    return 0;
}