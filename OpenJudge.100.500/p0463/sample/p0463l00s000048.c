#include <stdio.h>

int main (void) {
    int N;

    scanf ("%d", &N);

    if (N >= 100) {
        N = N % 100;
    }
    if (N >= 10) {
        N = N % 10;
    }

    switch (N) {
        case 0:
        case 1:
        case 6:
        case 8: printf("pon\n");
                break;
        case 3: printf("bon\n");
                break;
        default: printf("hon\n");
    }

    return 0;
}