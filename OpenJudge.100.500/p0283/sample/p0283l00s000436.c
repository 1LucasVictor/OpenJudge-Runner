#include <stdio.h>

#define N 8
#define NOTFREE -1
#define FREE 1

void putQueen(int);
void printBoard(void);

int r,c;
int k[N][N];
int row[N];
int col[N];
int dpos[15];
int dneg[15];

int main() {
  int i,j,n;

  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
    for(j=0;j<N;j++){
      k[i][j]=0;
    }
  }
  for(i=0;i<15;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    k[r][c] = NOTFREE;
  }

  putQueen(0);

  return 0;
}

void putQueen(int i){
  int j;

  if(i==N){
    printBoard();
    return;
  }

  for(j=0;j<N;j++){
    if(col[j]==NOTFREE||dpos[i+j]==NOTFREE||dneg[i-j+N-1]==NOTFREE) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOTFREE;
    putQueen(i+1);
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

void printBoard(void){//printf("in\n");
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(k[i][j]==NOTFREE&&row[i]!=j) return;
    }
  }

//printf("here\n");
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  //printf("\n");
}