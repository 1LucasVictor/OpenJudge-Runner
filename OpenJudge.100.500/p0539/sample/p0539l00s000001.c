#include <stdio.h>
int main(void){
    int N, i, j, cnt = 0;
    
    scanf("%d", &N);
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(N == i * j){
                cnt = cnt + 1;
            }
        }
    }
    if(cnt == 0){
        printf("No\n");
    }else if(cnt >= 1){
        printf("Yes\n");
    }
}
