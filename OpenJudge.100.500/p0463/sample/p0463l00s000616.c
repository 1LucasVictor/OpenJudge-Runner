/* Work 3_2
 * AtCoder ∴
 * cy_an */

#include <stdio.h>

int main(void){
    int num, num1;   // 変数宣言,nの1の位をn1
    scanf("%d", &num); // nを入力
    num1 = num % 10;

    switch(num1){
        case 2 :
        case 4 :
        case 5 :
        case 7 :
        case 9 : printf("hon\n"); break; // 2, 4, 5, 7, 9のとき"hon"を出力
        case 0 :
        case 1 :
        case 6 :
        case 8 : printf("pon\n"); break; // 0, 1, 6, 8のとき"pon"を出力
        case 3 : printf("bon\n"); break; // 3のとき"bon"を出力
    }
    return 0;
}