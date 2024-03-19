/*  ex3_2
    ruuu0048 */
#include <stdio.h>

int main(void){

    int book_number,keta; //本の数とその数の一桁の変数を宣言

    scanf("%d",&book_number); //変数に本の数を入力する

    keta = book_number % 10; //本の一桁を計算し代入

    
    //条件分岐して助数詞を出力
    if(keta == 3){ //一桁目が3なら
        printf("bon\n");
    }
    else if(keta == 0 || keta == 1 || keta == 6 || keta == 8) //一桁目が0,1,6,8なら
    {
        printf("pon\n");
    }
    else //それ以外なら
    {
        printf("hon\n");
    }
    

    return 0; 
}