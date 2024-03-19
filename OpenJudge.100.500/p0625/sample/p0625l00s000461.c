#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int A, B;
    scanf("%d%d", &A, &B);
    if (A > 8 || B > 8) {
        printf("%s\n", ":(");
    } else {
        printf("%s\n", "Yay!");
    }
    return 0;
}