#include <stdio.h>

int main(void) {

    int i, x;
    int n;

    scanf("%d", &n);

    i = 1;
    while (1) {
        x = i;
        if (x % 3 == 0) {
            printf(" %d", i);
            i++;
            if (i > n) {
                break;
            }
        } else if (x % 10 == 3) {
            printf(" %d", i);
            i++;
            if (i > n) {
                break;
            }
        } else {
            while (1) {
                x /= 10;
                if (x) {
                    if (x % 10 == 3) {
                        printf(" %d", i);
                    }
                } else {
                    break;
                }
            }
            i++;
            if (i > n) {
                break;
            }
        }
    }
    printf("\n");

    return 0;

}