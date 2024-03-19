#include <stdio.h>

int main () {
    int n;
    int a1[] = {2, 4, 5, 7, 9};
    int a2[] = {0, 1, 6, 8};

    scanf("%d", &n);
    n %= 10;

    for (int i=0; i < 5; i++) {
        if (n == a1[i]) {
            printf("hon\n");
            return 0;
        }
    }
    for (int i=0; i < 4; i++) {
        if (n == a2[i]) {
            printf("pon\n");
            return 0;
        }
        
    }
    printf ("bon\n");
    return 0;
}
