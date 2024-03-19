#include <stdio.h>
int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n", (int)((double)(B-1) / (double)(A-1) + 0.9));
    return 0;
} 