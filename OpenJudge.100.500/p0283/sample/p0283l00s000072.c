#include<stdio.h>
#define NOT_FREE 1
#define FREE 0
#define N 8

void putqueen(int);
void printboard(void);

int row[N], col[N], dpos[2*N-1], dneg[2*N-1], Q[N][N];

int main(){
  int k, i, r, c, j;

  scanf("%d", &k);

  for(i = 0; i < k; i++){
    scanf("%d%d", &r, &c);
    Q[r][c] = NOT_FREE;
  }

  putqueen(0);

  return 0;
}

void putqueen(int i){
  int j;

  if(i == N){
    printboard();
    return;
  }

  for(j = 0; j < N; j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE)
      continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    putqueen(i+1);
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

void printboard(){
  int i, j;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(Q[i][j] == NOT_FREE && row[i] != j)
	  return;
    }
  }

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(row[i] == j)
	printf("Q");
      else
	printf(".");
    }
    printf("\n");
  }
}