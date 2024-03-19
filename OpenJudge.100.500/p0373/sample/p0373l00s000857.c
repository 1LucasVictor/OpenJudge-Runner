#include <stdio.h>

int     main(void)
{
    int h, w;
    int i, j;
    
    while(scanf("%d%d", &h, &w) == 2 && (h|w) != 0)
    {
        i = 0;
        while (i < h)
        {
            j = 0;
            while (j < w)
            {
                if (j == 0 || j == w - 1 || i == 0 || i == h - 1)
                    printf("#");
                else
                    printf(".");
                j++;
            }
            i++;
            printf("\n");
        }
        printf("\n");
    }
}
