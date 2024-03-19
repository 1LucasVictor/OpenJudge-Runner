// 8 Queens Problem
#include <stdio.h>
#include <stdlib.h>
#define N 8

void putQueen(int);
void printBoard();

int p[N][N] = {0};
int row[N] = {0};
int col[N] = {0};
int dneg[2*N] = {0};
int dpos[2*N] = {0};

int r[64] = {0}, c[64] = {0};
int k;

int main() {
  int i, j;

  // input
  scanf("%d", &k);
  for(i = 0; i < k; i++) {
    scanf("%d %d", &r[i], &c[i]);
    // cannot put another queen on this row and column
  }
  putQueen(0);
  
  return 0;
}

void putQueen(int i) {
  int j;
  int cnt = 0;
  
  if(i == N) {
    for(i = 0; i < k; i++) {
      if(p[r[i]][c[i]] == 1) cnt++;
    }
    if(cnt == k) printBoard();
    return;
  }

  for(j = 0; j < N; j++) {
    if((col[j] == 1)||(dpos[i+j] == 1)||(dneg[i-j+N-1]== 1))
      continue;
    // put a queen at (i, j)
    row[i] = j;
    col[j] = 1;
    dpos[i+j] = 1;
    dneg[i-j+N-1] = 1;
    p[i][j] = 1;
    // try the next row
    putQueen(i+1);
    // remove the queen at (i, j) for backtracking
    col[j] = 0;
    dpos[i+j] = 0;
    dneg[i-j+N-1] = 0;
    p[i][j] = 0;
  }
}

void printBoard() {
  int i, j;
  // output
  for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
      if(p[i][j] == 1) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

