#include<stdio.h>
int N,M,K;
long int max=0;
 
void search(int i,int j,int time,int* A,int* B){
    if(time+A[i]<=K && i<=N){
        search(i+1,j,time+A[i],A,B);
    }else{
        if(i+j>max) max=i+j;
    }
    if(time+B[j]<=K && j<=M){
        search(i,j+1,time+B[j],A,B);
    }else{
        if(i+j>max) max=i+j;
    }
    return;
}
 
int main(){
    scanf("%d %d %d",&N,&M,&K);
    int A[N],B[M];
    for(int i=0;i<N;i++) scanf("%d",&A[i]);
    for(int i=0;i<M;i++) scanf("%d",&B[i]);
    search(0,0,0,A,B);
    printf("%ld\n",max);
    return 0;
}