#include<stdio.h>

int main(){
    int N,M,K;
    scanf("%d %d %d",&N,&M,&K);
    int A[N+1],B[M+1];
    long int ans=0,time=0;
    for(int i=0;i<N;i++) scanf("%d",&A[i]);
    for(int i=0;i<M;i++) scanf("%d",&B[i]);
    int a=0,b=0;
    while(1){
        if((b>=M || A[a]<=B[b]) && a<N && time+A[a]<=K){
            ans++;
            time+=A[a];
            a++;
        }else{
            if((a>=N || A[a]>=B[b]) && b<M && time+B[b]<=K){
                ans++;
                time+=B[b];
                b++;
            }
            else break;
        }
    }
    printf("%ld\n",ans);
    return 0;
}