/* ８クイーン問題 */

#include <stdio.h>


#define TRUE 1
#define FALSE 0
#define NOT_FREE 1
#define FREE 0
#define N 8      /* N x N のチェス盤 */


void putQueen(int);
void printBoard(void);


int x[N][N];
int col[N],row[N], dpos[ N*2-1 ], dneg[ N*2-1 ];
  /* dpos: /向きの対角線についてクイーンからFREEかNOT_FREEか記憶 
     dneg: \向きの対角線についてクイーンからFREEかNOT_FREEか記憶 
     col[i]: i行目の何列目にクイーンが置かれているか記憶 
     row[j]: j列目が他のクイーンから襲撃を受けているか記憶 */


int main()
{
  int i, j, k, r, c;

  /* 初期化パート */
  for( i = 0; i<N; i++ )
    row[i] = col[i] = FREE;
  for( i = 0; i<N*2-1; i++ )
    dpos[i] = dneg[i] = FREE;
  for( i = 0; i<N; i++ )
    {
      for( j = 0; j<N; j++ )
	x[i][j] = FALSE;
    }

  /* k個のクイーンの位置情報を読込み、それらのクイーンから襲撃を受ける行、列、対角線を記録 */
  scanf("%d", &k);
  for( i = 0; i<k; i++ )
    {
      scanf("%d%d", &r, &c);
      x[r][c] = TRUE;
    }

  /* N個のクイーンを配置 */
  putQueen(0);

  return 0;
}


/* N x N のマスから成るチェス盤に他のクイーンから襲撃を受けないようにN個のクイーンを配置する関数 */
void putQueen(int i)
{
  int j;

  /* 配置し終った場合 その盤を表示 */
  if( i == N )
    {
      printBoard();
      return;
    }

  for( j = 0; j<N; j++ )
    {
      /* i行j列目のマスが他のクイーンから襲撃を受けている場合 */
      if( col[j] == NOT_FREE || dpos[ i+j ] == NOT_FREE || dneg[ i-j + N-1 ] == NOT_FREE )
	  continue;

      /* i行j列目にクイーンを配置 */
      row[i] = j;
      col[j] = dpos[ i+j ] = dneg[ i-j + N-1 ] = NOT_FREE;
      /*次の行を試す */
      putQueen( i+1 );

      /* back-trackingのためにi行j列のクイーンを消す */
      row[i] = col[j] = dpos[ i+j ] = dneg[ i-j + N-1 ] = FREE;
    }
}


/* N x N のマスから成るチェス盤を表示 */
void printBoard(void)
{
  int i, j;

  for( i = 0; i<N; i++ )
    {
      for( j = 0; j<N; j++ )
	{
	  if( x[i][j] )
	    {
	      if( row[i] != j )
		return;
	    }
	}
    }

  for( i = 0; i<N; i++ )
    {
      for( j = 0; j<N; j++ )
	printf("%c", row[i] == j ? 'Q' : '.' );
      printf("\n");
    }
}

