#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if(n % 10 == 3) {
        printf("bon\n");
    }
    else if(n % 10 == 0 || n % 10 == 1 || n % 10 == 6 || n % 10 == 8) {
        printf("pon\n");
    }
    else {
        printf("hon\n");
    }
    return 0;
}