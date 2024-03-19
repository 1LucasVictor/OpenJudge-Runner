#include <stdio.h>

int main(void){
    int A,B,C;

    scanf("%d %d %d", &A, &B, &C);
    printf("%d\n", B-(A-C) > 0 ? B-(A-C) : 0);
    return 0;
}