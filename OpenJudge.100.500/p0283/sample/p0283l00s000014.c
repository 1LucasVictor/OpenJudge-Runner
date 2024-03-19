#include <stdio.h>
#include <string.h>


#define N 8 /* マス目の数 */

int PreQueen[N]; /* クイーンの初期配置 */

void printQueen(int queen[N])
{
    int i,j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
        {
            if(queen[i] == j)
            {
                printf("Q");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}

/* (i,j)の位置から縦横斜めの方向にある board のすべての要素の値に dを加える */
void changeBoard(int board[N][N], int i, int j, int d)
{
    int k;
    
    for (k = 0; k < N; k++)
    { 
        board[i][k] += d;             /* 横方向 */
        board[k][j] += d;             /* 縦方向 */
    }
    if (i > j)
    {
        for (k = 0; k < N-(i-j); k++)
        {
            board[k+(i-j)][k] += d;   /* 右下がり斜め方向 (i > jのとき） */
        }
    }
    else
    {
        for (k = 0; k < N-(j-i); k++)
        {
            board[k][k+(j-i)] += d;   /* 右下がり斜め方向 (i <= jのとき） */
        }
    }
    if (i+j < N)
    {
        for (k = 0; k <= i+j; k++)
        {
            board[i+j-k][k] += d;     /* 左下がり斜め方向（i +j < Nのとき） */
        }
    }
    else
    {
        for (k = i+j-N+1; k < N; k++)
        {
            board[i+j-k][k] += d;     /* 左下がり斜め方向（i+j >= Nのとき） */
        }
    }
}

/* i 行目のクイーンの位置を設定して， setQueen(queen, board, i+1) を呼び出す
   ただし， i == N のときは，一つの解が queen に入っているのでそれを表示するだけである */
void setQueen(int queen[N], int board[N][N], int i)
{
    int j;
    
    if (i == N)                     /* 解が見つかった */
    {
        printQueen(queen);
        return;
    }
    
    for (j = 0; j < N; j++)
    {
        if ( (board[i][j] == 0) || (PreQueen[i] == j) )  /* (i,j) の位置に置ける(または初期配置されている)ならば */
        {
            queen[i] = j;                      /* (i,j) の位置にクイーンを置く */
            changeBoard(board, i, j, +1);      /* (i,j) から縦横斜めの方向のboard値を+1する */
            setQueen(queen, board, i+1);       /* i+1 行目のクイーンの位置を決める */
            changeBoard(board, i, j, -1);      /* (i,j) から縦横斜めの方向のboard値を元に戻す */
        }
    }
}

int main()
{
    int k,n,C,R;
    int queen[N];
    int board[N][N];
    
    scanf("%d",&n);     /* 既にクイーンが配置されているマスの個数 */

    memset(board, 0, sizeof(board));
    memset(PreQueen, -1, sizeof(PreQueen));

    for(k = 0; k < n; k++)
    {
        scanf("%d%d",&C,&R);            /* 既にクイーンが配置されているマスの行と列 */
        PreQueen[C] = R;                /* (C,R) の位置にクイーンを置く */
        changeBoard(board, C, R, +1);   /* クイーンを配置するマスと襲撃可能なマスをセット */
    }

    setQueen(queen, board, 0);
    
    return 0;
}
