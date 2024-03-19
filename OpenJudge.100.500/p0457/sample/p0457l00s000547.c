#include <stdio.h>

int main(void){
    int i,j,tmp,N,M,K,A[200000],B[200000],ans=0,time;
    scanf("%d %d %d",&N,&M,&K);

    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<M;i++){
        scanf("%d",&B[i]);
    }

    int A2[200001],B2[200001];
    A2[0] = 0;
    B2[0] = 0;

    for(i=1;i<=N;i++){
        A2[i] = A2[i-1] + A[i-1];
    }
    for(i=1;i<=M;i++){
        B2[i] = B2[i-1] + B[i-1];
    }

    tmp=M;

    for(i=0;i<=N;i++){
        for(j=tmp;j>=0;j--){
            if(A2[i] + B2[j] <= K){
                if(ans < i+j) ans = i+j;
                tmp = j;
                break;
            }
        }
    }

    printf("%d\n",ans);

    return 0;
}