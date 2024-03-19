#include <stdio.h>

int main(void) {
    int number;
    while (scanf("%d", &number)) {
        printf("%d", (number + 1) / 2);
        return 0;
    }
}