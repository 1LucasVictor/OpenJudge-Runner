#include <stdio.h>
int main(void){
    int N, i, cnt;
    int A[1000];
    
    scanf("%d", &N);
    cnt = 0;
    
    for(i = 0; i < N; i++){
        scanf("%d", &A[i]);
        //printf("%d\n", A[i]);
        if(A[i]%2 == 0 && (A[i]%3 == 0 || A[i]%5 == 0)){
            cnt = cnt + 1;
            //printf("  %d\n", cnt);
        } else if(A[i]%2 == 0 && (A[i]%3 == !0 || A[i]%5 == !0)){
            cnt = cnt - 1;
        }
    }
    
    if(cnt >= 1){
        printf("APPROVED");
    } else if(cnt <= 0){
        printf("DENIED");
    }
    
}
