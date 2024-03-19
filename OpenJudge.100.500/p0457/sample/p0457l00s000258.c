#include<stdio.h>

int main(void){
    int N,M,K,n=0,time=0;
    scanf("%d %d %d", &N, &M, &K);

    int A[N],B[M];
    for(int i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
    for(int j=0;j<M;j++){
        scanf("%d", &B[j]);
    }

    int a=0;
    int b=0;
    for(;;){
        if(A[a]-B[b]>0){
            if(time + B[b]> K){
                break;
            }
            time += B[b];
            b++;
            n++;
        }
        else{
            if(time + A[a]> K){
                break;
            }
            time += A[a];
            a++;
            n++;
        }

        if(a==N){
            if(b==M)
                break;
            for(;;){
                if(b==M)
                    break;
                if(time + B[b]> K){
                    break;
                }
                time += B[b];
                b++;
                n++;
            }

        }
        else if(b==M){
            if(a==N)
                break;
                for(;;){
                    if(a==N)
                        break;
                    if(time + A[a]> K){
                       break;
                    }
                    time += A[a];
                    a++;
                    n++;
                }
        }

    }

    printf("%d", n);
}