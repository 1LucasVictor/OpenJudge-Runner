#include<stdio.h>
#define MAX 200000

int main(){
    int A[MAX],B[MAX];
    int a_readed,b_readed;
    int read_time;
    int *readed;
    int N,M,K;
    int time = 0;
    int count;
    int i;

    scanf("%d%d%d",&N,&M,&K);

    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<M;i++){
        scanf("%d",&B[i]);
    }

    count = 0;
    a_readed = b_readed = 0;
    while(1){
        if( a_readed >= N && b_readed >= M){
            break;
        }
        if( a_readed < N && b_readed < M){
            if( A[a_readed] < B[b_readed] ){
                read_time = A[a_readed];
                readed = &a_readed;
            }else{
                read_time = B[b_readed];
                readed = &b_readed;
            }
        }else if( a_readed < N){
            read_time = A[a_readed];
            readed = &a_readed;
        }else{
            read_time = B[b_readed];
            readed = &b_readed;
        }
        /*
        if( readed == &a_readed){
            printf("A選択\n");
        }else{
            printf("B選択\n");
        }
        */
        if( time + read_time <= K ){
            time += read_time;
            (*readed)++;
            count++;
        }else{
            break;
        }
    }

    printf("%d\n",count);
    
}