#include<stdio.h>
#include<stdlib.h>

#define N 8

int A[N][N], row[N], col[N], dpos[2 * N - 1], deng[2 * N - 1];

void put_queen();
void print();

int main(){
  int i, j, n, a, b;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      A[i][j] = -1;
    }
    row[i] = -1;
    col[i] = -1;
  }

  for(i = 0; i < 2 * N - 1; i++){
    dpos[i] = -1;
    deng[i] = -1;
  }

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d%d", &a, &b);
    A[a][b] = 1;
  }
  
  put_queen(0);

  return 0;
}

void put_queen(int x){
  int i, j;

  if(x == N){
    print();
    return;
  }

  for(i = 0; i < N; i++){
    if(col[i] == 1 || dpos[x + i] == 1 || deng[x - i + N - 1] == 1)
     continue;

    row[x] = i;
    col[i] = 1;
    dpos[x + i] = 1;
    deng[x - i + N - 1] = 1;

    put_queen(x + 1);

    row[x] = -1;
    col[i] = -1;
    dpos[x + i] = -1;
    deng[x - i + N - 1] = -1;

  }
}

void print(){
  int i,j;

  for(i = 0; i < N; i++)
    for(j = 0; j < N; j++){
      if(A[i][j] == 1){
        if(row[i] != j)
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
