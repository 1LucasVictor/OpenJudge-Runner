#include <stdio.h>
#define N 8
#define FREE 1
#define NOTFREE -1

int row[N],col[N],dpos[N+N-1],dneg[N+N-1];
int a[N][N];

void printBoard(void);

void putQueen(int i){
  int j;

  if(i == N){
    printBoard();
    return;
  }

  for(j = 0; j < N; j++){
    if(col[j] == NOTFREE || dpos[i+j] == NOTFREE || dneg[i-j+N-1] == NOTFREE){
      continue;
    }

    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOTFREE;
    putQueen(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

int main(){
  int k,r,c;
  int i;
  int j;

  scanf("%d",&k);
  for(i = 0; i < N; i++){
    row[i] = 0;
    col[i] = 0;
  }

  for(i = 0; i < N; i++){
    for(j = 0; j< N; j++){
      a[i][j] = 0;
    }
  }

  for(i = 0; i < N+N-1; i++){
    dpos[i] = 0;
    dneg[i] = 0;
  }

  for(i = 0; i < k; i++){
    scanf("%d%d",&r,&c);
    a[r][c] = 1;
  }
  putQueen(0);

  return 0;
}

void printBoard(){
  int i, j;
  
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(a[i][j]){
    if(row[i]!=j) return;
      }
    }
  }
   
  for(i=0; i< N; i++){
    for(j=0; j< N; j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }


}