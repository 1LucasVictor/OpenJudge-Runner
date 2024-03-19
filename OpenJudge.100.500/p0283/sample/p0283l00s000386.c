#include<stdio.h>
#define N 8
#define FREE 0
#define NOT_FREE 1

int row[N], col[N], dpos[N + N - 1], dneg[N + N - 1], A[N][N];

void putQueen(int i){
  int j;

  if(i == N){
    for(i = 0; i < N; i++){
      for(j = 0; j < N; j++){
        if(A[i][j] == NOT_FREE){
          if(row[i] != j)
            return ;
        }
      }
    }

    for(i = 0; i < N; i++){
      for(j = 0; j < N ; j++){
        if(row[i] == j)
          printf("Q");
        else
          printf(".");
      }
      printf("\n");
    }
    return;
  }

  for(j = 0; j <= N - 1; j++){
    if(col[j] == NOT_FREE || dpos[i + j] == NOT_FREE || dneg[i - j + N - 1] == NOT_FREE)
      continue;

    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = NOT_FREE;

    putQueen(i + 1);

    col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
  }
}

int main(){
  int i, j, k, r, c;

  for(i = 0; i < N + N - 1; i++){
    if(i < N)
      col[i] = dpos[i] = dneg[i] = FREE;
    else
      dpos[i] = dneg[i] = FREE;
  }

  scanf("%d", &k);

  for(i = 0; i < k; i++){
    scanf("%d%d", &r, &c);
    A[r][c] = NOT_FREE;
  }

  putQueen(0);

  return 0;
}

