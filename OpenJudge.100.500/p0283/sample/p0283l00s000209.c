#include <stdio.h>

#define N 8
#define FREE 0
#define NOT_FREE 1

#define pos(i, j) (i+j)
#define neg(i, j) (i-j+N-1)

int dpos[2*N];
int dneg[2*N];
int row[N];
int col[N];

int input[N], k;

void init() {
  int i;
  for (i = 0; i < N; i++) {
    dpos[pos(i, i)] = FREE;
    dneg[neg(i, i)] = FREE;
    col[i] = FREE;
    input[i] = -1;
  }
}

void display() {
  int i, j, cnt;

  cnt = 0;
  for (i = 0; i < N; i++) {
    if (input[i] == row[i]){
      cnt++;
    }
  }
  if (cnt != k) {
    return;
  }
  
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void updateBoard(int i, int j, int status) {
  col[j] = status;
  dpos[pos(i, j)] = status;
  dneg[neg(i, j)] = status;
}

void putQueen(int i) {
  int j;
  
  if (i == N) {
    display();
    return;
  }

  for (j = 0; j < N; j++) {
    if (col[j] == NOT_FREE ||
	dpos[pos(i, j)] == NOT_FREE ||
	dneg[neg(i, j)] == NOT_FREE) {
      continue;
    }

    row[i] = j;
    updateBoard(i, j, NOT_FREE);

    putQueen(i + 1);
    
    updateBoard(i, j, FREE);
  }
}

int main() {
  int i;
  int r, c;

  init();

  scanf("%d", &k);
  for (i = 0; i < k; i++) {
    scanf("%d %d", &r, &c);
    input[r] = c;
  }

  putQueen(0);
  
  return 0;
}

