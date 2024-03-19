#include <stdio.h>

int main(void){
    int N,i,j,cnt,pre;
    int A[200000];
    
    scanf("%d",&N);
    
    for(i=0;i<(N-1);i++){
        scanf("%d",&A[i]);
    }
    
    pre=0;
    for(i=1;i<=N;i++){
        cnt=0;
        for(j=pre;j<(N-1);j++){
            if(i==A[j]){
                cnt++;
            }
        }
        printf("%d\n",cnt);
        pre=pre+cnt;
    }
    
    return 0;
}