#include<stdio.h>

#define LEN 200000

int main(void)
{
    int i=0, count=0, time=0, c_a=0, c_b=0;
    long N, M, K;

    scanf("%ld %ld %ld", &N, &M, &K);
    long A[N], B[M], C[N+M];
    
    for(i=0; i<N; i++) {
        scanf("%ld", &A[i]);
    }
    for(i=0; i<M; i++) {
        scanf("%ld", &B[i]);
    }

    for(i=0; i<N+M; i++){
        if(A[c_a] > B[c_b]) {
            C[i] = B[c_b];
            c_b++;
        }  else {
            C[i] = A[c_a];
            c_a++;
        }
    }
    
    for(i=0; i<N+M; i++) {
        time += C[i];
        if(time < K) {
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}