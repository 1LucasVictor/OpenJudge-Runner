#include <stdio.h>

int main(void){
    int i,ai=0,bi=0,N,M,K,A[200000],B[200000],ans=0;
    scanf("%d %d %d",&N,&M,&K);

    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<M;i++){
        scanf("%d",&B[i]);
    }

    for(i=0;i<(N+M);i++){
        if(A[ai]<B[bi]){
            if(K >= A[ai]){
                K -= A[ai];
                ai++;
                ans++;
            }else{
                break;
            }
        }else{
            if(K >= B[bi]){
                K -= B[bi];
                bi++;
                ans++;
            }else{
                break;
            }
        }
    }

    printf("%d\n",ans);

    return 0;
}