#include <stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N], col[N], dpos[2*N-1], dneg[2*N-1];
char q[N][N];

void putQueen(int);
void printBoard(void);
void initialize(void);

int main() {
  int i, j, k, r, c;

  for (i = 0; i < N; i++) {
    row[i] = FREE;
    col[i] = FREE;
  }
  for (i = 0; i < 2*N-1; i++) {
    dpos[i] = FREE;
    dneg[i] = FREE;
  }

  scanf("%d", &k);

  for (i = 0; i < k; i++) {
    scanf("%d%d", &r, &c);
    q[r][c] = NOT_FREE;
  }

  putQueen(0);
  
  return 0;
}


void putQueen(int i) {
  int j;
  
  if (i == N) {
    printBoard();
    return;
  }

  for (j = 0; j < N; j++) {
    if (col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) continue;
    row[i] = j;
    col[j] = NOT_FREE;
    dpos[i+j] = NOT_FREE;
    dneg[i-j+N-1] = NOT_FREE;
    putQueen(i+1);
    col[j] = FREE;
    dpos[i+j] = FREE;
    dneg[i-j+N-1] = FREE;
  }
}


void printBoard(void) {
  int i, j;

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (q[i][j] == NOT_FREE) {
	if (row[i] != j) return;
      }
    }
  }
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (row[i] == j) printf("Q");
      else if (row[i] != j) printf(".");
    }
    printf("\n");
  }
}


void initialize(void) {
  int i, j;
  
  for (i = 0; i < N; i++) {
    row[i] = FREE;
    col[i] = FREE;
  }
  for (i = 0; i < 2*N-1; i++) {
    dpos[i] = FREE;
    dneg[i] = FREE;
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      q[i][j] = FREE;
    }
  }
}

