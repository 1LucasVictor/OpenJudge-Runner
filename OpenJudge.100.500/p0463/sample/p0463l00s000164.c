/* ex3_2
   YSK722 */

#include <stdio.h>

int main(void){
    int number;
    scanf("%d", &number);
    if(number <= 0 || 1000 <= number){  // numberが定義域外のとき
        return 1;                       // 処理終了
    }
    if(number % 10 == 3){  // numberの1の位が3のとき
        printf("bon\n");   // "bon"と出力
    }
    else if(number % 10 == 0
            || number % 10 == 1
            || number % 10 == 6
            || number % 10 == 8){  // numberの1の位が0,1,6,8のとき
        printf("pon\n");           // "pon"と出力
    }
    else{                 // numberの1の位が2,4,5,7,9のとき
        printf("hon\n");  // "hon"と出力
    }
        return 0;
}