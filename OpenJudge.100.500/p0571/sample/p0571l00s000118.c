#include <stdio.h>

int main(void) {
  	int A, B, N, sum;
  	scanf("%d %d %d", &N, &A, &B);
    sum = A * N;
    if(sum >= B) {
        printf("%d", B);
    } else {
        printf("%d", sum);
    }
    return 0;
}