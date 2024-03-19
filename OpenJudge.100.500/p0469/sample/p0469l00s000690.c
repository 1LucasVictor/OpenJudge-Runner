#include <stdio.h>

int main() {
        int K, A, B;

        scanf("%d %d %d", &K, &A, &B);
        for(; A <= B; A++) {
                if(A % K == 0) {
                        printf("OK");
                        return 0;
                }
        }
        printf("NG");

        return 0;
}
