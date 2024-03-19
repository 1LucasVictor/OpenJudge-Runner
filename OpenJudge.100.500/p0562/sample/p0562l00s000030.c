#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int count = 0;
    while (b > 0) {
        count++;
        b -= a;
    }
    printf("%d\n", count);
    return 0;
}
