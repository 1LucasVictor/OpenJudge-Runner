#include <stdio.h>

int main(void){
    // 変数
    long int n, k;
    long int result = 0;

    // 入力
    scanf( "%ld %ld", &n, &k );

    // 演算
    result = n % k ;

    // 条件分岐
    if( result > ( k - result ) ){
        result = k - result ;
    }

    // 出力
    printf( "%ld\n", result );

    return 0;
}