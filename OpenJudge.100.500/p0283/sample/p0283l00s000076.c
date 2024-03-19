#include <stdio.h>
#define EMPTY -111//何もいない状態
#define HERE 100//Queenがいる状態
#define N 8//N×Nの盤面
#define KOSHIN 3180

void putQueen(int);
void printBoard(void);

int row[N];//横
int col[N];//縦
int dpos[N*2];//左斜め下 dpos = i + j (i -> 行、j -> 列)
int dneg[N*2];//右斜め下 dneg = i - j + (N - 1)
int judge[N][N];

int main(){

  int k = 0, r = 0, c = 0;
  int i = 0;

  //盤面の初期化
  for(i = 0; i < N; i++){

    row[i] = col[i] = EMPTY;
    
  }

  for(i = 0; i < N*2; i++){

    dneg[i] = dpos[i] = EMPTY;
    
  }

  //盤面に駒をおいていく
  scanf("%d",&k);

  for(i = 0; i < k; i++){

    scanf("%d%d",&r,&c);
    row[r] = c;
    col[c] = dpos[r+c] = dneg[r-c+N-1] = HERE;
    judge[r][c] = KOSHIN;
  }

  //ここで被らないようにQをおいていく
  putQueen(0);
  
  return 0;
  
}

void putQueen(int i){

  int j = 0;
  
  if(i == N){//終了条件
  
    printBoard();
    return;
    
  }
  
  for(j = 0; j < N; j++){

    if(judge[i][j] == KOSHIN){
    }
    else if(col[j] == HERE || dpos[i+j] == HERE || dneg[i-j+N-1] == HERE){
      continue;
    }
    
    //put a queen at(i, j)
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = HERE;
  
    //try the next row
    putQueen(i+1);
    
    //remove the queen at (i, j)for backtracking
    if(judge[i][j] == KOSHIN);
    else col[j] = dpos[i+j] = dneg[i-j+N-1] = EMPTY;
    
  }
  
}

void printBoard(void){

  int i = 0, j = 0;
  
  for(i = 0; i < N; i++){

    for(j = 0; j < N; j++){

      if(col[j] == HERE && row[i] == j)printf("Q");
      else printf(".");

    }

    printf("\n");
    
  }
  
}

