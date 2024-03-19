#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int i,j,k,N,M,temp;
    scanf("%d %d",&N,&M);
    int sarr[M],carr[M],ans[N];
    for(i=0 ;i<M ;i++){
        scanf("%d %d",&sarr[i],&carr[i]);
    }
    for(i=0 ;i<M ; i++){
        if((sarr[i]==1 && carr[i]==0) && N !=1) {
            printf("%d",-1);
            exit(0);
        }
    }
    for(i=0 ;i<M ; i++){
        for(j=i+1 ; j<M ;j++){
                if(sarr[i] == sarr[j]){
                    if(carr[i] != carr[j]) {
                        printf("%d",-1);
                        exit(0);
                    }
                }
        }
    }
    for(j=1;j<N+1;j++){
        for(i=0 ;i<M ; i++){
            if(sarr[i]==j){
                ans[j-1]= carr[i];
                break;
            }
            else{
                if(i == M-1){
                    if(j == 1){
                        if(N == 1){
                            ans[j-1] =0;
                        }
                        else{
                            ans[j-1] =1;
                        }
                    }
                    else{
                        ans[j-1] =0;
                    }
                }
            }
        }
    }
    temp =0;
    for(i=0;i<N;i++){
        k=1;
        for(j=0; j<N-i-1;j++){
            k *= 10;
        }
        temp += ans[i] * k;
    }
    printf("%d",temp); 
    return 0;   
}

