#include<stdio.h>
signed main(){
    long long N, M, K, i, j=0, l=0, count=0;
    scanf("%lld %lld %lld", &N, &M, &K);

    long long A[N], B[M];

    for(i=0; i<N; i++){
        scanf("%lld", &A[i]); 
        /* A にそれぞれの本を読むのに必要な時間をいれる */
    }

    for ( i=0; i<M; i++){
        scanf("%lld", &B[i]);
        /* B にそれぞれの本を読むのに必要な時間をいれる */
    }
    
    for(i=0; count+A[j] <= K || count+B[l] <= K; i++){
        if(A[j] < B[l]){
            count += A[j];
            j++;
        }else if(B[l] < A[j]){
            count += B[l];
            l++;
        }
    }

    printf("%lld\n", i);

 return 0;
    
}