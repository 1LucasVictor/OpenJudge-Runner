#include <stdio.h>
#define N 8
#define FREE 0
#define NOT_FREE -1

int x[N][N], row[N], col[N], dpos[2*N-1], dneg[2*N-1];
void putQueen(int);
void printBoard();

int main(){
  int i, j, k, r, c;
  
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      x[i][j] = FREE;
    }
  }
  scanf("%d",&k);
  for(i = 0; i < k; i++){
    scanf("%d%d",&r,&c);
    x[r][c] = NOT_FREE;
  }

  putQueen(0);

  return 0;
}

void putQueen(int i){
  int j;
  if(i == N){
    printBoard();
    return;
  }
  for(j = 0; j < N; j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE)
      continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    putQueen(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

void printBoard(){
  int i, j;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(x[i][j] == NOT_FREE){
	if(row[i] != j) return;
      }
    }
  }
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}