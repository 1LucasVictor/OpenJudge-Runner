#include<stdio.h>
#include<stdbool.h>
#define M 8
#define FREE 1
#define NFREE -1

int n;
int row[M];
int col[M];
int dpos[2*M-1];
int dneg[2*M-1];
bool G[M][M];
void qutQueen(int);
void printBoard();

int main(){
  int i;
  int j;
  int x;
  int y;

  for(i=0;i<M;i++){
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i=0;i<2*M-1;i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }

  for(i=0;i<M;i++){
    for(j=0;j<M;j++){
      G[i][j] = false;
    }
  }
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf(" %d %d",&x,&y);
    G[x][y] = true;
  }
  qutQueen(0);
  return 0;
}

void printBoard(){
  int i;
  int j;

  for(i=0;i<M;i++){
    for(j=0;j<M;j++){
      if(G[i][j]){
        if(row[i] != j) return;
      }
    }
  }

  for(i=0;i<M;i++){
    for(j=0;j<M;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void qutQueen(int i){
  int j;

  if(i == M){
    printBoard();
    return;
  }

  for(j=0;j<M;j++){
    if(col[j] == NFREE || dpos[i+j] == NFREE || dneg[i-j+M-1] == NFREE) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+M-1] = NFREE;
    qutQueen(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+M-1] = FREE;
  }
}


