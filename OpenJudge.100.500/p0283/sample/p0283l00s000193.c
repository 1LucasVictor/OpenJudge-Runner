#include<stdio.h>
#include<stdbool.h>
#define N 8
#define FREE 1
#define NOT_FREE -1

bool X[N][N];
int row[N],col[N],dneg[N*2-1],dpos[N*2-1];

void initialize(){
  int i;
  for(i=0;i<N;i++) {row[i] = FREE,col[i] = FREE;}
  for(i=0;i<N*2-1;i++) {dneg[i] = FREE;dpos[i]=FREE;}
}

void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]){
	if(row[i] != j) return;
      }
    }
  }
  for(int i = 0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j){
	printf("Q");
      }else{
	printf(".");
      }
    }
    printf("\n");
  }
}
void recursive(int i){
  int j;
  if(i==N){
    printBoard();return;
  }

  for(j=0;j<N;j++){
    if(NOT_FREE == col[j] ||
       NOT_FREE == dpos[i+j] ||
       NOT_FREE == dneg[i-j+N-1]) continue;
    row[i] = j;col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;

    recursive(i+1);

    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

int main(){
  int i,j,k;
  initialize();

  for(i = 0;i<N;i++){
    for(j=0;j<N;j++){
      X[i][j] = false;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    int r,c;
    scanf("%d%d",&r,&c);
    X[r][c] = true;
  }

  recursive(0);
  return 0;
}

