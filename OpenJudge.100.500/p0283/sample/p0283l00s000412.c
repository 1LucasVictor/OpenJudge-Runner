#include<stdio.h>
#define N 8
#define FREE 1
#define NOT_FREE -1

void printBoard(void );
void putQueen(int );

int row[N],col[N];
int dpos[15],dneg[15];
int X[N][N];

int main(){
  int i,j,r,c,k;

  for(i=0 ; i<N ; i++){
    for(j=0 ; j<N ; j++) X[i][j] = 0;
  }

  scanf("%d",&k);
  for(i=0; i<k; i++){
    scanf("%d%d",&r,&c);
    X[r][c] = 1;
  }

  for(i=0 ; i<N ; i++){
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i=0 ; i<15 ; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }

  putQueen(0);

  return 0;
}



void putQueen(int i){
  int j;
  if(i == N){
    printBoard();
    return;
  }
  for(j = 0; j < N; j++){
    if(NOT_FREE == col[j] || NOT_FREE == dpos[i+j] || NOT_FREE == dneg[i-j+N-1]) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    putQueen(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}


void printBoard(){
  int i,j;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(X[i][j]){
    if(row[i] != j) return;
      }
    }
  }
  for(i=0 ; i<N ; i++){
    for(j=0 ; j<N ; j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}