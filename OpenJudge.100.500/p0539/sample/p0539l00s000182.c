/* ex3_4
   Acro  */
 
#include <stdio.h> 
int main(void){
    int num,i;
    int ans = 1;
    scanf("%d",&num);
    for(i = 1; i < 10 ; i++){
        /* 1から9まで探索 */
        if(num % i == 0){
            /* 割り切れたとき */
            if(num/i < 10){
                /* 商が10より小さければYes */
                printf("Yes\n");
                ans = 0;
                break;
            }
        }
    }
    if(ans){
        printf("No\n");
    }
    return 0;
}