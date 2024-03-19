#include <stdio.h>
#define N 8
#define FREE 0
#define NOT_FREE 1

int Board[N][N];
int row[N], col[N], dpos[15], dneg[15];

void putQueen(int i) {
  int j, k, m;
  if(i == N) {
    for(k = 0; k < N; k++) {
      for (m = 0; m < N; m++) {
        if(Board[k][m] == FREE) printf(".");
        else printf("Q");
      }
      printf("\n");
    }
    return;
  }
  if(row[i] == NOT_FREE) putQueen(i+1);
  else {
    for(j = 0; j < N; j++) {
      if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) continue;
      col[j] = dpos[i+j] = dneg[i-j+N-1] = Board[i][j] = NOT_FREE;
      putQueen(i+1);
      col[j] = dpos[i+j] = dneg[i-j+N-1] = Board[i][j] = FREE;
    }
  }
}

int main() {
  int i, j, n, k, m;

  for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
      Board[i][j] = FREE;
    }
    row[i] = col[i] = FREE;
  }
  for(i = 0; i < 15; i++) {
    dpos[i] = dneg[i] = FREE;
  }

  scanf("%d", &n);
  for(k = 0; k < n; k++) {
    scanf("%d", &i);
    scanf("%d", &j);
    Board[i][j] = row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
  }
  putQueen(0);

  return 0;
}