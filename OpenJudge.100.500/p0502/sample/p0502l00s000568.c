#include <stdio.h>
int main(void){
    int a, i, cnt;
    int A[1000];
    
    scanf("%d", &a);
    
    for(i = 0; i < a; i++){
        scanf("%d", &A[i]);
        //printf("%d\n", A[i]);
    }
    
    cnt = 1;
    
    for(i = 0; i < a; i++){
        if(A[i]%2 == 0){
            if(!(A[i]%3 == 0 || A[i]%5 == 0)){
                cnt = cnt - 1;
                //printf("  %d\n", cnt);
            }
        }
    }
    
    if(cnt <= 0){
        printf("DENIED");
    }else{
        printf("APPROVED");
    }
    
}
