//Print a frame
#include <stdio.h>
int main()
{
    int H, W, i, j;
    while (1)
    {
        scanf("%d%d", &H, &W);
        if (H + W == 0)
            break;

        for (i = 0; i < H; i++)
        {
            for (j = 0; j < W; j++)
            {
                if (i == 0 || i == H - 1)
                    putchar('#');
                else
                {
                    if (j == 0 || j == W - 1)
                        putchar('#');
                    else
                        putchar('.');
                }
            }
            putchar('\n');
        }
        putchar('\n');
    }
    return 0;
}
