#include <stdio.h>
int main(void){
    int N, i, cnt1 = 0, cnt2 = 0;
    int a[1000];
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < N; i++){
        if(a[i] % 3 == 0){
            cnt1 = cnt1 + 1;
        }
    }
    
    for(i = 0; i < N; i++){
        if(a[i] % 5 == 0){
            cnt2 = cnt2 + 1;
        }
    }
    
    if(cnt1 == 0 || cnt2 == 0){
        printf("DENIED\n");
    }else if(cnt1 + cnt2 >= 2){
        printf("APPROVED\n");
    }
    
}
