#include<stdio.h>

#define N 8
#define FREE -1
#define NOTFREE 1

int row[N], col[N], dpos[2 * N - 1], dneg[2 * N - 1];

int X[N][N];

void initialize(){
  int i, j;
  for(i = 0; i < N; i++) {
    row[i] = FREE;
    col[i] = FREE;
  } 
  for(i = 0; i < 2 * N - 1; i++){
    dpos[i] = FREE; // 右から左にかけての斜め
    dneg[i] = FREE; // 左から右にかけての斜め
  }
}

void print(){
  int i, j;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(X[i][j]){
	if(row[i] != j) return;
      }
    }
  }

  for(i = 0; i < N; i++){
     for(j = 0; j < N; j++){
       if(row[i] == j) printf("Q");
       else printf(".");
     }
     printf("\n");
  }
}

void put_queen(int i){
  if(i == N){
    print();
    return;
  }

  int j;

  for(j = 0; j < N; j++){
    if(NOTFREE == col[j] || NOTFREE == dpos[i + j] || NOTFREE == dneg[i - j + N - 1])
      continue;

    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = NOTFREE;
    put_queen(i + 1);
    row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
  }

}

int main(){
  initialize();
  int i, j, k, r, c;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      X[i][j] = 0;
    }
  }
     
  scanf("%d", &k);

  for(i = 0; i < k; i++){
    scanf("%d %d", &r, &c);
    X[r][c] = 1;
  }

  put_queen(0);
  
  return 0;
}

