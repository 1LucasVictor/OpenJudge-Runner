#include <stdio.h>

int main(void)
{
    int cars[10];

    int in_car;
    int cnt = 0;
    while (scanf("%d", &in_car) != EOF) {
        if (in_car != 0) {
            cars[cnt] = in_car;
            cnt++;
        } else {
            cnt--;
            printf("%d\n", cars[cnt]);
        }
    }

    return 0;
}