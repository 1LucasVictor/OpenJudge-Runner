#include <stdio.h>

int main(void)
{
    while (1) {
        int sum = 0;
        int i;

        scanf("%d", &i);

        if (i == 0) break;

        while (i != 0) {
            sum += (i % 10);
            i /= 10;
        }

        printf("%d\n", sum);
    }

    return 0;
}