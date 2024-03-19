#include<stdio.h>
#include<stdbool.h>
#define N 8
#define NFR -1
#define FR 1


int row[N], col[N], dpos[2*N-1], dneg[2*N-1];
bool S[N][N];

void initialize(){
  int i;
  for( i = 0 ; i < N ; i++){
    row[i] = FR;
    col[i] = FR;
  }
  for( i = 0 ; i < 2*N-1 ; i++){
    dpos[i] = FR;
    dneg[i] = FR;
  }
}

void print(){
  int i, j;
  for( i = 0 ; i < N ; i++){
    for( j = 0 ; j < N ; j++){
      if( S[i][j] ){
        if( row[i] != j) return;
      }
    }
  }

  for( i = 0 ; i < N ; i++ ){
    for( j = 0 ; j < N ; j++ ){
      if(row[i] != j)
      printf(".");
      else printf("Q");
    }
    printf("\n");
  }
}

void qeen(int i){
  int j;
  if( i == N ){
    print();
    return;
  }

  for( j = 0 ; j < N ; j++ ){
    // {i, j }がクイーンの攻撃範囲にあるか調査
    if( col[j] == NFR || dpos[i+j] == NFR || dneg[i-j+(N-1)] == NFR) continue;
    //{i, j}がクイーンの攻撃範囲に入っていなければクイーンの配置
    row[i] = j;
    col[j] = NFR;
    dpos[i+j] = NFR;
    dneg[i-j+(N-1)] = NFR;
    //　次の行
    qeen(i+1);
    row[i] = FR;
    col[j] = FR;
    dpos[i+j] = FR;
    dneg[i-j+(N-1)] = FR;
  }
}

int main(){
  int i, j, k, r, c;

  initialize();

  for( i = 0 ; i < N ; i++){
    for( j = 0 ; j < N ; j++){
      S[i][j] = false;
    }
  }

  scanf("%d", &k);
  for( i = 0 ; i < k ; i++){
    scanf("%d%d", &r, &c);
    S[r][c] = true;
  }
  qeen(0);

  return 0;
}

