#include <stdio.h>

int main(void)
{
        int A, B;
        scanf("%d%d", &A, &B);

        if (B % A)
                printf("%d\n", B - A);
        else
                printf("%d\n", A + B);

        return 0;
}
