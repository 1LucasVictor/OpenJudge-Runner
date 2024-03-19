#include <stdio.h>
int main(void){
    int N, i, cnt = 1;
    int a[1000];
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        scanf("%d\n", &a[i]);
    }
    
    for(i = 0; i < N; i++){
        if(a[i]%2 == 0){
            if(!(a[i]%3 == 0 || a[i]%5 == 0)){
                cnt = cnt - 1;
            }
        }
    }
    if(cnt + N == 0){
        printf("DENIED\n");
    }else if(cnt + N >= 1){
        printf("APPROVED\n");
    }
}
