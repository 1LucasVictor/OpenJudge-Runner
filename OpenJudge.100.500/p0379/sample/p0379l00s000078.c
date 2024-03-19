////////////////////////////////////////////////////////////////////////
//ファイル名：ITP_1_6_D_Matrix Vector Multiplication.c
//内容；行列ベクトル計算を行うプログラム
//
//入力：n × mの行列A、mの列ベクトルB
//
//出力：行列の計算結果を出力
//
//制約：n ≧ 0
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define MATRIX_NUM_MAX 100

int main(void)
{
    //変数の宣言
    int i,j,a,b,n,m;

    int A[MATRIX_NUM_MAX][MATRIX_NUM_MAX] = {0};
    int B[MATRIX_NUM_MAX] = {0};
    int c[MATRIX_NUM_MAX] = {0};   

    //行列の長さの決定
    scanf("%d %d \n", &n, &m);

    //行列Aの要素を入力
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &a);
            A[i][j] = a;
        }
    }

    //列ベクトルBの要素を決定
    for(i=0; i<m; i++)
    {
        scanf("%d", &b);
        B[i] = b;
    }

    //行列の計算
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            c[i] = c[i] + A[i][j]*B[j];
        }
    }

    //計算結果の出力
    for(i=0; i<n; i++)
    {
        printf("%d\n", c[i]);
    }

    return 0;
}
