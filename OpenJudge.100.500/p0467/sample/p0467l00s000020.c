#include <stdio.h>

int main(void){

    int A = 0;
    int B = 0;
    int C = 0;
    int K = 0;
    int count = 0;
    int sum = 0;
    scanf("%d %d %d %d", &A, &B, &C, &K);

    count = K - A;
    if (count < 0){
        sum += K;

    } else {
        sum += A;
        count -= B;
        if (count > 0){
            sum -= K - A - B;    
        }
    }
    printf("%d\n", sum);

    return 0;
}