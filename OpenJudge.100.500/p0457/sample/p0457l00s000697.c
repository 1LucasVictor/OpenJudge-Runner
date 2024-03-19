#include<stdio.h>
#define MAX 200000

typedef unsigned long long ULL;
int main(){
    ULL a_sum[MAX+1],b_sum[MAX+1];
    int a,b;
    int read_time;
    int *readed;
    int N,M,K;
    ULL time = 0;
    int max;
    int i,j;


    scanf("%d%d%d",&N,&M,&K);

    a_sum[0] = b_sum[0] = 0;
    for(i=0;i<N;i++){
        scanf("%d",&a);
        a_sum[i+1] = a_sum[i] + a;
    }
    for(i=0;i<M;i++){
        scanf("%d",&b);
        b_sum[i+1] = b_sum[i] + b;
    }

    max = 0;
    for(i=0;i<=N;i++){
        if( a_sum[i] > K){
            break;
        }
        for(j = max - i ;j<=M; j++){
            time = a_sum[i] + b_sum[j];
            if(time > K){
                break;
            }
            if( time <= K){
                if( max < i + j){
                    max = i + j;
                }
            }
        }
    }
    printf("%d\n",max);
    
}