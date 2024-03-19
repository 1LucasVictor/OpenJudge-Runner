#include <stdio.h>

int main(void) {
    int M;
    scanf("%d" ,&M);
    printf("%d" ,M/100+(M/10)%10+M%10);
    return 0;
}
