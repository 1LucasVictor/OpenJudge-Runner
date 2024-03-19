#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{
        int A, B, T;
        int count = 0;

        scanf("%d %d %d", &A, &B, &T);

        for (int i = A; i < T + 0.5; i += A)
                count += B;

        printf("%d", count);
}
