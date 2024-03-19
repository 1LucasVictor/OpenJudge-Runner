// Queens Problem
#include <stdio.h>

#define N 8
#define NOT_FREE -1
#define FREE 1

int B[N][N];        // N*Nの盤面
int dpos[2 * N - 1];        // dpos[x]がNOT_FREEのとき、左下方向の列xは襲撃されている
int dneg[2 * N - 1];        // dneg[x]がNOT_FREEのとき、右下方向の列xは襲撃されている
int row[N]; // row[x]がNOT_FREEのとき、行xは襲撃されている
int col[N]; // col[x]がNOT_FREEのとき、列xは襲撃されている

void printBoard(){
  int i, j;
  
  for(i=0; i < N; i++){
    for(j=0; j < N; j++){
      if(B[i][j]){
	if(row[i] != j) return;
      }
    }
  }
  
  for(i=0; i < N; i++){
    for(j=0; j < N; j++){
      if(row[i] == j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQueen(int i){
  int j;

  if(i == N){
    printBoard();
    return;
  }
  for(j=0; j < N; j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE
       || dneg[i-j+N-1] == NOT_FREE) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    putQueen(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

int main(){
  int i, j, k, r, c;

  for(i=0; i < N; i++) row[i] = col[i] = FREE;
  for(i=0; i < 2 * N - 1; i++) dpos[i] = dneg[i] = FREE;
  
  for(i=0; i < N; i++){
    for(j=0; j < N; j++){
      B[i][j] = 0;
    }
  }
  
  scanf("%d", &k);
  for(i=0; i < k; i++){
    scanf("%d%d", &r, &c);
    B[r][c] = 1;
  }

  putQueen(0);
  
  return 0;
}

