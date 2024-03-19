#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int count = 0;
    int sum = 1;
    while (sum < b) {
        count++;
        sum += (a - 1);
    }
    printf("%d\n", count);
    return 0;
}
