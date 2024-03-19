//======================================================================
// Contents    : AOJ ITP1_5_B
//               たてH cm よこ W cm の枠を描く
//               ( 周囲を'#'、内部を'.'で表現 )
// Input       : H , W
// Output      : '#'と'.'
//             : exp) "5 6"の入力時、以下のように出力される
//             :        ######
//             :        #....#
//             :        #....#
//             :        #....#
//             :        ######
// Constraints : 3 ≤ H,W ≤ 300
//             : "0 0" 入力で終了
// Author      : 廣部智也
// LastUpdate  : 2020/06/05
// Since       : 2020/06/05
//======================================================================

#include <stdio.h>
#include <stdlib.h>                                                 // exit 関数を使用するため

#define LOWER_LIMIT   3
#define UPPER_LIMIT 300

int Input_error( int number, int Lower_limit, int Upper_limit );    // 入力エラーを判断する関数

void Drawing_frames( int H, int W );

int main(){

    int H = 0, W = 0;

    while(1){
        
        // データの入力
		scanf("%d %d", &H , &W );

        if( H == 0 && W == 0 ){
            break;
        }

        // 入力エラーの判断
        Input_error( H, LOWER_LIMIT, UPPER_LIMIT );
        Input_error( W, LOWER_LIMIT, UPPER_LIMIT );

        // データの出力
        Drawing_frames( H, W );

	}

	return 0;
}



//============================================================
// Contents    : 入力エラーを判断
// Input       : 調べる変数, 下限, 上限
// Output      : エラーなら強制終了
// Author      : 廣部智也
// LastUpdate  : 2020/06/05
// Since       : 2020/06/05
//============================================================

int Input_error( int number, int Lower_limit, int Upper_limit ){
    
    if( number < Lower_limit || number > Upper_limit ){ 
        printf("Input error\n");
        exit(1);
    }

    return 0;
}



//============================================================
// Contents    : たてH cm よこ W cm の枠を描く
// Input       : H , W
// Output      : '#'と'.'
// Author      : 廣部智也
// LastUpdate  : 2020/06/05
// Since       : 2020/06/05
//============================================================

void Drawing_frames( int H, int W ){

    int i = 0, j = 0;

    for( i = 0; i < H; i++ ){

		for( j = 0; j < W; j++ ){

            if ( i == 0 || i == (H-1) || j == 0 || j == (W-1) ){
                putchar('#');
            }

            else{
                putchar('.');
            }
            
        }

		putchar('\n');                               
    }

    putchar('\n');                                                  // データセット間の空行

    return;  
}                                            
