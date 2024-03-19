#include <stdio.h>
#define N 8

int a[N][N];

void output(int row[]){
  int i, j;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(a[i][j] == 1){
	if(row[i] != j) return;
      }
    }
  }
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(row[i] != j){
	printf(".");
      }else{
	printf("Q");
      }
    }
    printf("\n");
  }
}

void putQueen(int i, int row[], int col[], int dpos[], int dneg[]){
  int j, k;
  if(i == N){
    output(row);
    return;
  }
  for(j = 0; j < 8; j++){
    if(col[j] == 1 || dpos[i+j] == 1 || dneg[i-j+7] == 1){
      continue;
    }
    row[i] = j;
    col[j] = 1;
    dpos[i+j] = 1;
    dneg[i-j+7] = 1;
    putQueen(i+1, row, col, dpos, dneg);
    col[j] = 0;
    dpos[i+j] = 0;
    dneg[i-j+7] = 0;
  }
}

int main(){
  int i, j, k;
  int r, c;
  int row[N], col[N], dpos[2 * N - 1], dneg[2 * N - 1];

  for(i = 0; i < N; i++){
    row[i] = 0;
    col[i] = 0;
  }
  for(i = 0; i < 2 * N - 1; i++){
    dpos[i] = 0;
    dneg[i] = 0;
  }
  
  scanf("%d", &k);

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      a[i][j] = 0;
    }
  }
  
  for(i = 0; i < k; i++){
    scanf("%d%d", &r, &c);
    a[r][c] = 1;
  }
  
  putQueen(0, row, col, dpos, dneg);

  return 0;
}

