#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);
    if(A >= B) {
        printf("1\n");
    }
    else {
        printf("%d\n", (int)((B-1)/3.0));
    }
    return 0;
} 