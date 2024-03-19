#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0, j = 0;
    long long N, M;
    long long K;
    scanf("%lld%lld%lld", &N, &M, &K);
    long long *A = malloc(sizeof(long long) * N);
    long long *B = malloc(sizeof(long long) * M);
    for (i = 0; i < N;i++){
        scanf("%lld", &A[i]);
    }
    for (i = 0; i < M;i++){
        scanf("%lld", &B[i]);
    }
    long long asum = 0;
    long long amax = 0;
    for (i = 0; i < N;i++){
        asum += A[i];
        if(asum>K){
            amax = i;
            break;
        }
    }
    long long bsum = 0;
    long long bmax = 0;
    long long n;
    if(amax){
        for (i = 0; i < amax;i++){
            asum -= A[amax - i];
            bsum = asum;
            bmax = 0;
            for (j = 0; j < M;j++){
                bsum += B[j];
                if(bsum>=K){
                    bmax = j;
                }
            }
            if(j==1){
                break;
            }
        }
        n = amax - (i+1) + j;
    }else{
        for (i = 0; i < M;i++){
            asum += B[i];
            if(asum>=K){
                break;
            }
        }
        if(A[0]>=K){
            n = i;
        }else{
            n = N + i;
        }
    }
    printf("%lld", n);

    return 0;
}