#include<stdio.h>
int main(void){
    int cnt;
    int N;
    scanf("%d",&N);
    int A[N-1],ans[N];

    for(cnt=0;cnt<N;cnt++){
        ans[cnt]=0;
    }
    
    for(cnt=0;cnt<N-1;cnt++){
        scanf("%d",&A[cnt]);
        
        if(A[cnt]>=1 && A[cnt]<=N)
            ans[A[cnt]-1]++;
        
    }

    for(cnt=0;cnt<N;cnt++){
        printf("%d\n",ans[cnt]);
    }

    return 0;
}