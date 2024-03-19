#include <stdio.h>

int max(int a,int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(void){
    int N,M,K;
    long long NA[200001];
    long long MB[200001];
    int ans = 0;
    
    scanf("%d%d%d",&N,&M,&K);
    
    NA[0] = 0;
    for(int i = 1; i < N + 1; i++){
        int tmp;
        scanf("%d",&tmp);
        NA[i] = tmp + NA[i-1];
    }
    
    MB[0] = 0;
    for(int i = 1; i < M + 1; i++){
        int tmp;
        scanf("%d",&tmp);
        MB[i] = tmp + MB[i-1];
    }
    
    int best = 0;
    for(int i = 0; i < N+1; i++){
        if(NA[i] > K){
            break;
        }
        for(int j = M; j >= 0; j--){
            if(MB[j] <= K - NA[i]){
                best = j;
                break;
            }
        }
        
        ans = max(ans,i+best);
    }
    
    printf("%d\n",ans);
}
