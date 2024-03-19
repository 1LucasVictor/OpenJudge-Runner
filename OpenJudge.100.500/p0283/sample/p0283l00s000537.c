#include <stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

void putQueen(int);
void printBoard(void);
void initialize(void);

int Q[N][N];
int row[N]; //row[x]がNOT_FREE(FREEじゃない)ならば、行xは襲撃されている
int col[N]; //col[x]がNOT_FREEならば、列xは襲撃されている
int dpos[2*N-1]; //dpos[x]がNOT_FREEならば、左下方向の列xは襲撃されている
int dneg[2*N-1]; //dneg[x]がNOT_FREEならば、右下方向の列xは襲撃されている

int main()
{
  int n,i,j,r,c;

  initialize();
  
  scanf("%d",&n);
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      Q[i][j] = 0; //0=Qなし、if文で判断するための0
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&r,&c);
    Q[r][c] = 1; //1=Qあり、if文で判断するための1
  }

  putQueen(0);
    
  return 0;
}

void putQueen(int i)
{
  int j;
  
  if(i==N){ //Qの配置に成功
    printBoard(); //print
    return ;
  }

  for(j=0;j<N;j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE)
      continue; //横、右下方向、左下方向どれかが埋まっていたらやり直し
    row[i] = j; //row[i] != FREE にしといて(Qが入っているということ)かつ、print回数を制限するためにjを入れる 
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE; 
    putQueen(i+1); //次
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE; //Qが配置しきれなかったから全部消去
  }
}

void printBoard()
{
  int i,j;
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(Q[i][j] && row[i] != j) return; //最初に入力した場所のrow[]がj以外なら出力しない
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j) printf("Q"); //row[i]がjならQがあるので出力
      else printf("."); //それ以外は.
    }
    printf("\n");
  }
}
  
void initialize()
{
  int i;

  for(i=0;i<N;i++){ //全部空にする
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i=0;i<2*N-1;i++){ //全部空にする
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

