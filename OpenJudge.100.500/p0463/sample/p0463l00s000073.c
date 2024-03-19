/* ex3_2
    nnasy */

#include <stdio.h>

int main(void) {
    int num;    //整数変数の宣言
    scanf("%d", &num);    //numに入力

    switch(num%10){    //numの一の位の値を比較する
        case 0:
        case 1:
        case 6:
        case 8:
            printf("pon\n");    //numの一の位が0,1,6,8ならば pon を出力            
            break;
        case 2:
        case 4:
        case 5:
        case 7:
        case 9:
            printf("hon\n");    //numの一の位が2,4,5,7,9ならば hon を出力
            break;
        case 3:
            printf("bon\n");    //numの一の位が3ならば bon を出力
            break;
        default:
            printf("nonValid\n");    //0もしくは負の値をnumに入力したとき
            break;
    }

    return 0;
}