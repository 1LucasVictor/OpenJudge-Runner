#include <stdio.h>

#define N 8
#define FREE 1
#define NOT_FREE 0

void scan();
void putQueen(int);
void printBoard();

int row[N], col[N], dpos[15], dneg[15], Queen[N][N], c=0;

int main(){
  int a, b;
  for(a = 0; a < N; a++){
    row[a] = col[a] = FREE;
  }
  for(a = 0; a < 15; a++){
    dpos[a] = dneg[a] = FREE;
  }
  for(a = 0; a < N; a++){
    for(b = 0; b < N; b++){
      Queen[a][b] = -1;
    }
  }
  scan();
  putQueen(0);
  //printBoard();
  return 0;
}

void scan(){
  int a, k, r, c;
  scanf("%d",&k);
  for(a = 0; a < k; a++){
    scanf("%d%d",&r,&c);
    Queen[r][c] = 0;
  }
}

void putQueen(int a){
  int b;
  if(a == N){
    printBoard();
    return;
  }
  for(b = 0; b < N; b++){
    if(col[b] == FREE && dpos[a+b] == FREE && dneg[a-b+N-1] == FREE){
      row[a] = b;
      col[b] = NOT_FREE;
      dpos[a+b] = NOT_FREE;
      dneg[a-b+N-1] = NOT_FREE;
      putQueen(a+1);
      row[a] = col[b] = FREE;
      dpos[a+b] = dneg[a-b+N-1] = FREE;
    }
  }
}

void printBoard(){
  int a, b;
  for(a = 0; a < N; a++){
    for(b = 0; b < N; b++){
      if(Queen[a][b] != -1){
	if(row[a] != b) return;
      }
    }
  }
  for(a = 0; a < N; a++){
    for(b = 0; b < N; b++){
      if(row[a] == b) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

