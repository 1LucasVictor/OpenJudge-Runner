#include <stdio.h>

int main(void)
{
    int A, B;

    scanf("%d %d", &A, &B);

    if (A <= 16 && A >= 1 && B <= 16 && B >= 1)
    {
        if ((A + B <= 16))
        {
            if (A > 8 || B > 8)
            {
                printf(":(\n");
            }
            else
            {
                printf("Yay!\n");
            }
        }
        else
        {
            printf(":(\n");
        }
    }
    else
    {
        printf(":(\n");
    }
    return 0;
}