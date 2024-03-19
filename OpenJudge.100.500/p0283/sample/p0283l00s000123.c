#include <stdio.h>
#define N 8
#define Free -1
#define Notfree -2
#define False 0
#define True 1

void putQueen(int);
void printBoard(void);

int a[N][N],row[N],col[N],dpos[2*N-1],dneg[2*N-1];

int main(){
  int i,j,k,r,c;

  for(i = 0;i < N;i++){
    row[i] = Free;
    col[i] = Free;
  }
  for(i = 0;i < 2*N-1;i++){
    dpos[i] = Free;
    dneg[i] = Free;
  }

  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      a[N][N] = False;
    }
  }

  scanf("%d",&k);
  for(i = 0;i < k;i++){
    scanf("%d %d",&r,&c);
    a[r][c] = True;
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
  for(j = 0;j < N;j++){
    if(col[j] == Notfree || dpos[i+j] == Notfree || dneg[i-j+N-1] == Notfree) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = Notfree;
    putQueen(i+1);
    col[j] = dpos[i+j] = dneg[i-j+N-1] = Free;
  }
}

void printBoard(void){
  int i,j;
  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(a[i][j] == True){
	if(row[i] != j) return;
      }
    }
  }
  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

