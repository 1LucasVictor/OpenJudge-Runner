// ABC 172 C問題　なぜ不正解?

#include<stdio.h>

int main(void)
{
    int i=0, count=0, time=0, c_a=0, c_b=0;
    long long int N, M, K;

    scanf("%lld %lld %lld", &N, &M, &K);
    long long int A[N], B[M], C[N+M];
    
    for(i=0; i<N; i++) {
        scanf("%lld", &A[i]);
    }
    for(i=0; i<M; i++) {
        scanf("%lld", &B[i]);
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
        if(time <= K) {
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}