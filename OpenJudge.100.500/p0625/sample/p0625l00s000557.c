#include <stdio.h>

int main()
{
    int A, B;

    scanf("%d %d", &A, &B);

    if((A >= 1 && A <= 8) && (B >= 1 && B    <= 8))
    {
        printf("Yay!\n");
    }
    else
    {
        printf(":(\n");
    }

    return 0;
}