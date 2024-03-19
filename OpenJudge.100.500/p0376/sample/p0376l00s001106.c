//======================================================================
// Contents    : AOJ ITP1_6_A
//               与えられた数列を逆順に出力
// Input       : n(数列の長さ)、data_in
// Output      : data_out
// Constraints : n ≤ 100
//               0 ≤ data_in < 1000
// Author      : 廣部智也
// LastUpdate  : 2020/06/29
// Since       : 2020/06/17
//======================================================================

#include <stdio.h>
#include <stdlib.h>                                                 // exit 関数を使用するため

#define LOWER_LIMIT   0
#define UPPER_LIMIT 999

// 入力エラーを判断する関数
int Input_error( int number, int lower_limit, int upper_limit );    

// 数列を逆順にする関数
void Sort_Reversal( int n );

int main(){

    int n = 0;
        
    // データの入力
    scanf("%d", &n );

    // 入力エラーの判断
    if( n > 100 ){
        printf("Input error\n");
        return 0;
    }

    // データの出力
    Sort_Reversal( n );

    return 0;
}



//============================================================
// Contents    : 数列を逆順に出力
// Input       : data_in
// Output      : data_out
// Author      : 廣部智也
// LastUpdate  : 2020/06/17
// Since       : 2020/06/17
//============================================================

void Sort_Reversal( int n ){

    int data_in[100]  = {};
    int i = 0;

    // データの入力
    for( i = 0; i < n; i++ ){
        
        scanf("%d", &data_in[i] );

        // 入力エラーの判断
        Input_error( data_in[i], LOWER_LIMIT, UPPER_LIMIT );
    }

    // データの出力
    for( i = 0; i < n - 1; i++ ){

        printf("%d ", data_in[n-i-1] );

    }

    printf("%d\n", data_in[0] );
    

    return;
}



//============================================================
// Contents    : 入力エラーを判断
// Input       : 調べる変数, 下限, 上限
// Output      : エラーなら強制終了
// Author      : 廣部智也
// LastUpdate  : 2020/06/05
// Since       : 2020/06/05
//============================================================

int Input_error( int number, int lower_limit, int upper_limit ){
    
    if( number < lower_limit || number > upper_limit ){
        printf("Input error\n");
        exit(1);
    }

    return 0;
}
