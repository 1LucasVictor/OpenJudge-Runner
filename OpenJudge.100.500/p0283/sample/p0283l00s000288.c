#include<stdio.h>
#include<stdbool.h>
#define N 8
#define FREE -1
#define NOT_FREE 1
#define TRUE 1
#define FALSE 0

void initialize();
void printBoard();
void recuresive(int);

int row[N], col[N], dpos[2 * N - 1], dneg[2 * N - 1];

bool X[N][N];

void initialize(){
  int i;
  for(i = 0; i < N; i++){
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i = 0; i < 2 * N - 1; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

void printBoard(){
  int i, j;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(X[i][j]) if(row[i] != j) return;
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

void recuresive(int i){
  int j;
  if(i == N){
    printBoard();
    return;
  }
  for(j = 0; j < N; j++){
    if(NOT_FREE == col[j] || NOT_FREE == dpos[i + j] || NOT_FREE == dneg[i - j + N - 1]) continue;
    row[i] = j;
    col[j] = NOT_FREE;
    dpos[i + j] = NOT_FREE;
    dneg[i - j + N - 1] = NOT_FREE;
    recuresive(i + 1);
    row[i] = FREE;
    col[j] = FREE;
    dpos[i + j] = FREE;
    dneg[i - j + N - 1] = FREE;
  }
}

int main(){
  int i, j, k, r, c;
  initialize();
  for(i = 0; i < N; i++) for(j = 0; j < N; j++) X[i][j] = false;
  scanf("%d",&k);
  for(i = 0; i < k; i++){
    scanf("%d%d",&r,&c);
    X[r][c] = true;
  }
  recuresive(0);
  
  return 0;
}