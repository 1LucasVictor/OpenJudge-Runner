#include <stdio.h>

int main(){

    int A = 0;
    int B = 0;

    scanf("%d %d", &A, &B);

    if (A >= 1 && B >= 1 && A <= 9 && B <= 9){
            A = A * B;
            printf("%d", A);
    } else {
        printf("-1\n");
    }

    return 0;
}