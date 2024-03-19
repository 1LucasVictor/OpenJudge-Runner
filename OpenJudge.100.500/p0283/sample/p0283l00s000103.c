#include <stdio.h>
#define N 8

int row[N], col[N], dpos[2*N-1], dneg[2*N-1];
int X[N][N];

void init(){
  int i, j;
  for(i=0; i<N; i++) row[i] = col[i] = 0;
  for(i=0; i<2*N-1; i++) dpos[i] = dneg[i] = 0;
  for(i=0; i<N; i++) {
    for(j=0; j<N; j++) {
      X[i][j] = 0;
    }
  }
}

void printBoard(){
  int i, j;
  for(i=0; i<N; i++) {
    for(j=0; j<N; j++) {
      if(X[i][j] == 1) {
    if(row[i] != j) return;
      }
    }
  }
  for(i=0; i<N; i++) {
    for(j=0; j<N; j++) {
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQueen(int i) {
  int j;
  if(i == N) {
    printBoard();
    return;
  }

  for(j=0; j<N; j++) {
    if(col[j] == 1 || dpos[i+j] == 1 || dneg[i-j+N-1] == 1) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = 1;
    putQueen(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = 0;
  }
}

int main() {
  int i, k, r, c;

  init();

  scanf("%d",&k);
  for(i = 0; i < k; i++) {
    scanf("%d%d",&r,&c);
    X[r][c] = 1;
  }

  putQueen(0);

  return 0;
}


