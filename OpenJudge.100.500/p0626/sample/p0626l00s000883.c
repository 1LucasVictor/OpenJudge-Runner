#include <stdio.h>

int main(void){
    int D,N,i,ans;
    scanf("%d %d",&D,&N);
    
    ans = 0;
    if(N < 100){
        if(D == 0){
            ans = N;
        }else if(D == 1){
            ans = N * 100;
        }else if(D == 2){
            ans = N * 10000;
        }
    }else if(N == 100){
        if(D == 0){
            ans = N + 1;
        }else if(D = 1){
            ans = (N + 1) * 100;
        }else if(D == 2){
            ans = (N + 1) * 10000;
        } 
    }
    printf("%d\n",ans);
}