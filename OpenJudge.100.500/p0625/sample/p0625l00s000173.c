#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int A;
    int B;

    scanf("%d", &A);
    scanf("%d", &B);

    if(1 > B || B > 16 || 1 > A || A > 16 || (A + B) > 16) {
        exit(0);
    }

    if(A <= 8 && B <= 8) {
        printf("Yay!\n");
    } else {
        printf(":(\n");
    }
    return 0;
}