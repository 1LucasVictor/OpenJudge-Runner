#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *A;
    int *B;
    int N, M, K;

    scanf("%d %d %d", &N, &M, &K);

    A = (int *)malloc((sizeof(int))*N);
    B = (int *)malloc((sizeof(int))*M);

    scanf("%d", &(*(A+0)));
    for(int i=1; i<N; i++){
        scanf("%d", &(*(A+i)));
        if((long int)(*(A+i)+*(A+i-1)) <= K){
            *(A+i) += *(A+i-1);
        } else{
            *(A+i) = K+1;
        }
    }

    scanf("%d", &(*(B+0)));
    for(int i=1; i<M; i++){
        scanf("%d", &(*(B+i)));
        if((long int)(*(B+i)+*(B+i-1)) <= K){
            *(B+i) += *(B+i-1);
        } else{
            *(B+i) = K+1;
        }
    }

    int maxA;
    int i;
    for(i=0; i<N; i++){
        if(A[i] > K) break;
    }
    maxA = i;

    int j;
    int max = maxA;
    int k=0;
    for(i=maxA-1; i>=0; i--){
        for(j=k; j<M; j++){
            if(A[i]+B[j] > K){
                k = j;
                break;
            }
        }
        max = (i+1+j > max)? i+1+j : max;
    }

    printf("%d\n", max);

    return 0;
}