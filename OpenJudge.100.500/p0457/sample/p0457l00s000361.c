#include<stdio.h>

int main(void){
    int N,M,K;
    scanf("%d",&N);
    scanf("%d",&M);
    scanf("%d",&K);
    int A[N],B[M],i;
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<M;i++){
        scanf("%d",&B[i]);
    }

    int n=0;
    int m=0;
    int count=0;
    while(K>=A[n]||K>=B[m]){
        if(A[n]>=B[m]){
            K=K-B[m];
            m++;
        }
        else{
            K=K-A[n];
            n++;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}