#include<stdio.h>
signed main(){
    long long N, M, K;
    int i, j=0, l=0, count=0;
    scanf("%lld %lld %lld", &N, &M, &K);

    long long A[N], B[M];

    for(i=0; i<N; i++){
        scanf("%lld", &A[i]); 
    }

    for ( i=0; i<M; i++){
        scanf("%lld", &B[i]);
    }
    
    for(i=0;count+A[j]<=K||count+B[l]<=K;i++){
        if(A[j]<B[l]){
            count+=A[j];
            j++;
        }else{
            count+=B[l];
            l++;
        }
    }

    printf("%d\n", i);

 return 0;
    
}