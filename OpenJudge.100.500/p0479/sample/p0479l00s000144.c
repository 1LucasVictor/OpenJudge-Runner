#include <stdio.h>

int main(void){
    int N,i,j,cnt;
    int A[200000];
    
    scanf("%d",&N);
    
    for(i=0;i<(N-1);i++){
        scanf("%d",&A[i]);
    }
    
    for(i=1;i<=N;i++){
        cnt=0;
        for(j=0;j<(N-1);j++){
            if(i==A[j]){
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    
    return 0;
}