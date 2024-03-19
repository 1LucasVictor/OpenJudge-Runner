#include<stdio.h>
#include<stdbool.h>
#define N 8
#define FREE -1
#define NOTFREE 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
void initialize(void);
int printBoard(void);
int recursive(int);

bool X[N][N];

int main(){
  int i,j,k,r,c;
 
  initialize();

  for(i = 0; i < N; i++)
    for(j = 0; j < N; j++)
      X[i][j] = false;

  scanf("%d",&k);
  for(i = 0; i < k; i++){
    scanf("%d%d",&r,&c);
    X[r][c] = true;
  }

  recursive(0);

  return 0;
  
}

void initialize(){
  int i;
  for(i = 0; i < N; i++){
    row[i] = FREE;
    col[i] = FREE;
  }

  for(i = 0; i < 2*N-1; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

int printBoard(){
  int i,j;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(X[i][j]){
	if(row[i] != j) return 0;
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

int recursive(int i){
  int j;
  if(i == N){
    printBoard();
    return 0;
  }
  for(j = 0; j < N; j++){

    if(NOTFREE == col[j] || NOTFREE == dpos[i+j] || NOTFREE == dneg[i-j+N-1]) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOTFREE;

    recursive(i+1);

    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}