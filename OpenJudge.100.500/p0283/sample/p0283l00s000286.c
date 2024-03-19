#include <stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N], col[N], dpos[2 * N-1], dneg[2 * N-1];
int A[N][N];


void intialize()
{
  for(int i=0;i<N;i++){row[i]=FREE; col[i]=FREE;}
  for(int i=0; i<2*N-1; i++){dpos[i]=FREE; dneg[i]=FREE;}
}

void printboard()
{
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)//クイーンが実際に置かれた　かつ　調べたパターンとは一致しない　なら表示しない
    {
      if( A[i][j] )  { if( row[i]!=j )return; }
    }
  }
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      if( row[i]==j ) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQueen(int i)//i行目から
{
  int j;
  if(i == N)//最後までたどり着いたら表示
  {
    printboard();
    return;
  }
  for( j=0;j<N;j++ )
  {
    if( col[j] == NOT_FREE ||dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE )
    continue;
    //(i, j)にクイーンを置く
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    //次の行を試す
    putQueen(i+1);
    //バックトラッキングのために　(i, j)のクイーンを消す
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
  //失敗した失敗した失敗した失敗した・・・
}


int main()
{
  int n,r,c;
  for(int i=0;i<N;i++){A[i][i]=0;}

  intialize();
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)A[i][j]=0;
  }
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d%d",&r,&c);//i番目に入力された座標情報
    A[r][c]=1;
  }
  putQueen(0);

  return 0;
}

