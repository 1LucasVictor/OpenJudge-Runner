#include <stdio.h>
#include <stdlib.h>

int main(void){

    long N = 0;
    long K = 0;
    long tmp = 0;
    int flag = 0;
    scanf("%ld %ld", &N, &K);

    N = N % K;

    while (flag == 0){
        tmp = N;
        N = labs(N - K);
        if (tmp <= N){
            N = tmp;
            flag = 1;
        }
    }

    printf("%ld", N);
    return 0;
}