#include<stdio.h>

int main(void){
    int l, r, x, min = 2000000000;

    scanf("%d %d", &l, &r);

    for (int i = l; i <= r; i++) {
        x = i;
        while (x >= 2019) {
        x = x % 2019;
        }

        if (min > i) {
            min = i;
        }
    }

    x = min * (min + 1);
    while (x >= 2019) {
        x = x % 2019;
    }

    printf("%d\n", x);

    return 0;

}