#include <stdio.h>

int main(void)
{
    int H, W, i, j;
    
    while (1) {
        scanf("%d %d", &W, &H);
        if (H == 0 && W == 0)   break;
        
        for (i = 0; W > i; i++)
        {
            for (j = 0; H > j; j++) {
                if (i == 0 || i == (W - 1) || j == 0 || j == (H - 1))
                {
                    putchar('#');
                } else {
                    putchar('.');
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}