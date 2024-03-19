#include <stdio.h>

int main()
{
    int value;
    int happiness = 0;

    scanf("%d", &value);

    while (value / 500) {
        happiness += 1000;
        value -= 500;
    }

    while (value / 5) {
        happiness += 5;
        value -= 5;
    }

    printf("%d\n", happiness);

    return 0;
}