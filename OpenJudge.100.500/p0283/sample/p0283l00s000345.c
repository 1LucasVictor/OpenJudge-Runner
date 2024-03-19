#include<stdio.h>
#include<stdbool.h>
#define M 8
#define NFR -1
#define FR 1


int row[M], col[M], dpos[2*M-1], dneg[2*M-1];



bool S[M][M];



void initialize(){
  int i;
  for( i = 0 ; i < M ; i++){
    row[i] = FR;
    col[i] = FR;
  }
  for( i = 0 ; i < 2*M-1 ; i++){
    dpos[i] = FR;
    dneg[i] = FR;
  }
}




void print(){
  int i, j;
  for( i = 0 ; i < M ; i++){
    for( j = 0 ; j < M ; j++){
      if( S[i][j] ){
        if( row[i] != j) return;
      }
    }
  }

  for( i = 0 ; i < M ; i++ ){
    for( j = 0 ; j < M ; j++ ){
      if(row[i] != j)
      printf(".");
      else printf("Q");
    }
    printf("\n");
  }
}

void qeen(int i){
  int j;
  if( i == M ){
    print();
    return;
  }

  for( j = 0 ; j < M ; j++ ){
    if( col[j] == NFR || dpos[i+j] == NFR || dneg[i-j+(M-1)] == NFR) continue;
    row[i] = j;
    col[j] = NFR;
    dpos[i+j] = NFR;
    dneg[i-j+(M-1)] = NFR;
    qeen(i+1);
    row[i] = FR;
    col[j] = FR;
    dpos[i+j] = FR;
    dneg[i-j+(M-1)] = FR;
  }
}

int main(){
  int i, j, k, r, c;

  initialize();

  for( i = 0 ; i < M ; i++){
    for( j = 0 ; j < M ; j++){
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

