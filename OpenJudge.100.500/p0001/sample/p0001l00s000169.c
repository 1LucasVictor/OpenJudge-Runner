#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int a, b;

    while (~scanf("%d %d", &a, &b)) {
        printf("%d\n", (int)log10((double)(a + b)) + 1);
    }

    return EXIT_SUCCESS;
}