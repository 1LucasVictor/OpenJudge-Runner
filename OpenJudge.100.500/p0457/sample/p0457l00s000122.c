#include<stdio.h>

int main(){
    long int N,M,K;
    scanf("%ld %ld %ld",&N,&M,&K);
    long int A[N],B[M];
    long int ans=0,time=0;
    for(int i=0;i<N;i++) scanf("%ld",&A[i]);
    for(int i=0;i<M;i++) scanf("%ld",&B[i]);
    long int a=0,b=0;
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
            else{
                break;
            }
        }
    }
    printf("%ld\n",ans);
    return 0;
}