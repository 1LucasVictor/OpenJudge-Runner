#include<stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N],/*行*/ col[N]/*列*/;
int dpos[2*N-1],dneg[2*N-1]; /*dpos:左下方向 dneg:右下方向*/

int X[N][N];

void Initialize(); //初期化
void PrintBoard();
void recursive(int); //再帰


int main(){
  int i, j;
  int k, r, c;
  /*1行目に整数 k が与えられます。続く k 行にクイーンが配置されているマスが2つの整数 r, c で与えられます。r, c はそれぞれ0から始まるチェス盤の行と列の番号を表します。*/
  
  Initialize();

  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      X[i][j] = -1;
    }
  }

  scanf("%d",&k);
  for(i = 0 ; i < k ; i++){
    scanf("%d %d",&r,&c);
    X[r][c] = 1;
  }

  recursive(0);

  return 0;
}

void Initialize(){
  int i;

  for(i = 0 ; i < N ; i++){
    row[i] = FREE;
    col[i] = FREE;
  }

  for(i = 0 ; i < 2 * N - 1 ; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

void PrintBoard(){
  int i, j;

  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      if(X[i][j] == 1){
	if(row[i] != j) return;
      }
    }
  }

  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;

  if(i == N){
    PrintBoard();
    return;
  }

  for(j = 0 ; j < N ;j++){
    if(col[j] == NOT_FREE || dpos[i + j] == NOT_FREE || dneg[i - j + N - 1] == NOT_FREE) continue;

    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + N -1] = NOT_FREE;

    recursive(i + 1);

    row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
  }
}

