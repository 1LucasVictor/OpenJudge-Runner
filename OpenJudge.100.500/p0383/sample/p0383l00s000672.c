//======================================================================
// Contents    : AOJ ITP1_7_D
//               n×m  の行列 A と m×l の行列 B を入力し、
//               それらの積 n×l の行列 C を出力
// Input       : n、m、l
//                n×m の行列 A の要素、 m×l の行列 B の要素
// Output      : n×l の行列 C の要素
// Constraints : 1 ≤ n,m,l ≤ 100
//               0 ≤ Aの要素,Bの要素 ≤ 10000
//               各行の隣り合う要素を１つの空白で区切る
// Author      : 廣部智也
// LastUpdate  : 2020/07/23
// Since       : 2020/07/13
//======================================================================

#include <stdio.h>
#include <stdlib.h>                                                       // exit 関数を使用するため

#define LOWER_LIMIT_n_m_l     1
#define UPPER_LIMIT_n_m_l   100
#define LOWER_LIMIT_A_B       0
#define UPPER_LIMIT_A_B   10000

// 入力エラーを判断する関数
int Input_error( int number, int lower_limit, int upper_limit );
// 入力エラーを判断する関数（解放要の場合）
int Input_error_free( int number, int lower_limit, int upper_limit , int *name1, int *name2, long *name3 );

// 行列A、Bの要素を入力する関数
void matrix_Configuration( int n, int m, int l, int *matrix_A, int *matrix_B, long *matrix_C );

// 行列Cを計算し出力する関数
void matrix_multiplication( int n, int m, int l, int *matrix_A, int *matrix_B, long *matrix_C );



int main(){

    int n = 0, m = 0, l = 0;

    int a = 0, b = 0;
    long c = 0;               // 初期化用

    int  *matrix_A = &a, *matrix_B = &b;
    long *matrix_C = &c;

    // データの入力：A、Bの行、列
    scanf("%d %d %d", &n , &m , &l );

    Input_error( n , LOWER_LIMIT_n_m_l, UPPER_LIMIT_n_m_l );
    Input_error( m , LOWER_LIMIT_n_m_l, UPPER_LIMIT_n_m_l );
    Input_error( l , LOWER_LIMIT_n_m_l, UPPER_LIMIT_n_m_l );

    // データの処理：行列A、B、Cの大きさを定義　※free忘れずに
    matrix_A = malloc( sizeof(int) * ( n * m + 1 ) );      // 配列が[0]スタートだと混乱するので、[1]スタートにするために＋１
    matrix_B = malloc( sizeof(int) * ( m * l + 1 ) );
    matrix_C = malloc( sizeof(long) * ( n * l + 1 ) );

    // データの入力：行列A、Bの要素を入力
    matrix_Configuration( n, m, l, matrix_A, matrix_B, matrix_C );

    // データの処理・出力：行列cの要素を計算し出力
    matrix_multiplication( n, m, l, matrix_A, matrix_B, matrix_C );

    // メモリの解放
    free(matrix_A);
    free(matrix_B);
    free(matrix_C);

    return 0;
}



//=========================================================================
// Contents    : 行列A、Bの要素を入力
// Author      : 廣部智也
// LastUpdate  : 2020/07/23
// Since       : 2020/07/13
//=========================================================================

void matrix_Configuration( int n, int m, int l, int *matrix_A, int *matrix_B, long *matrix_C ){

    int i = 1, j = 1;
    
    int tmp = 0;
    

    // データの入力：行列Aの要素
    while( i <= n * m ){

        scanf("%d", &tmp );
        Input_error_free( tmp, LOWER_LIMIT_A_B, UPPER_LIMIT_A_B , matrix_A, matrix_B, matrix_C );

        matrix_A[i] = tmp;
//        printf("%d " , matrix_A[i] ); //値確認用
        i++;
    }

    // データの入力：行列Bの要素
    while( j <= m * l ){

        scanf("%d", &tmp );
        Input_error_free( tmp, LOWER_LIMIT_A_B, UPPER_LIMIT_A_B , matrix_A, matrix_B, matrix_C );

        matrix_B[j] = tmp;
        
        j++;
    }


    return;
}



//=========================================================================
// Contents    : 行列Cを計算し出力
// Author      : 廣部智也
// LastUpdate  : 2020/07/23
// Since       : 2020/07/13
//=========================================================================

void matrix_multiplication( int n, int m, int l, int *matrix_A, int *matrix_B, long *matrix_C ){

    int x = 1, y = 1, z = 1;

    // データの処理・出力
    for( x = 1; x <= n; x++ ){
        for( z = 1; z <= l; z++ ){
            
            matrix_C[ (x-1)*l+z ] = 0;

            for( y = 1; y <= m; y++ ){
                matrix_C[ (x-1)*l+z ] = matrix_C[ (x-1)*l+z ] + (long)(matrix_A[ (x-1)*m+y ] * matrix_B[ (y-1)*l+z ]);
//                printf("%d " , (y-1)*l+z ); //値確認用
            }
//            printf("\n"); //値確認用
            if( z == l ) printf("%ld\n", matrix_C[ (x-1)*l+z ] );
            else         printf("%ld " , matrix_C[ (x-1)*l+z ] );
            
//              printf("%d " , (x-1)*l+z );

        }
    }


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



//============================================================
// Contents    : 入力エラーを判断　動的配列ver
// Input       : 調べる変数, 下限, 上限
// Output      : エラーならメモリを解放し強制終了
// Author      : 廣部智也
// LastUpdate  : 2020/07/23
// Since       : 2020/07/13
//============================================================

int Input_error_free( int number, int lower_limit, int upper_limit , int *name1, int *name2, long *name3 ){
    
    if( number < lower_limit || number > upper_limit ){
        printf("Input error\n");
        free(name1);
        free(name2);
        free(name3);
        exit(1);
    }

    return 0;
}



