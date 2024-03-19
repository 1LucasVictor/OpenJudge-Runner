#include <stdio.h>

int main(void){
    // 変数
    int COIN_500 = 500;
    int COIN_5 = 5;
    int value = 0;
    int point_500 = 0;
    int point_5 = 0;
    int sum = 0;

    // 入力
    scanf( "%d", &value );

    // 演算
    point_500 = ( value / COIN_500 ) * 1000 ;
    value = value % COIN_500;

    point_5 = ( value / COIN_5 ) * 5 ;

    sum = point_500 + point_5 ;

    // 出力
    printf( "%d\n", sum );


    return 0;
}