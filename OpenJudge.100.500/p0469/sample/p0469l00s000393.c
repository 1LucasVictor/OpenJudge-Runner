#include <stdio.h>

int main(void) {
    int K = 0;
    int A = 0;
    int B = 0;
    int i = 0;
    scanf("%d", &K);
    printf("\n");
    scanf("%d %d", &A ,&B);
    printf("\n");
    for (i = A;i <= B;i++) {
        if (i % K == 0) {
            printf("OK");
            break;
        }
        else if (i == B) {
            printf("NG");
        }
    }
    return 0;
}