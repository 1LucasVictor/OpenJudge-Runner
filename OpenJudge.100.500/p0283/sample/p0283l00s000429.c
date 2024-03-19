#include<stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1
int map[N][N],row[N],col[N],dpos[2*N],dneg[2*N];

void printBoard(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(map[i][j]){
	if(row[i] != j) return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQueen(int i){
  int j;
  
  if(i==N){
    printBoard();
    return;
  }

  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE)
          continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    putQueen(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }

}

int main(){
  int n,r,c;
  int i,j;

  for(i=0;i<N;i++) for(j=0;j<N;j++) map[i][j] = 0;
  for(i=0;i<N;i++) row[i] = col[i] = FREE;
  for(i=0;i<2*N;i++) dpos[i] = dneg[i] = FREE;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    map[r][c] = 1;
  }

  putQueen(0);  
  
  return 0;
}

