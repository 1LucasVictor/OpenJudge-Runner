#include <stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int col[N],row[N],dpos[N*2-1],dneg[N*2-1],B[N][N];
void putQueen(int);
void printBoard(void);
 
void putQueen(int i){
  int j;
 
  if(i == N)
  {
    printBoard();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE ||dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE){
      continue;
    }
  row[i]=j;
  col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
  putQueen(i+1);
  col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
 
  }
}
 
void printBoard(void){
  int i,j;
 
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(B[i][j]==NOT_FREE && row[i] != j)return;
    }
  }
for(i=0;i<N;i++){
  for(j=0;j<N;j++){
    if(row[i]==j)printf("Q");
    else printf(".");
    }
  printf("\n");
  }
}
 
int main(){
  int i, j, n,x,y;
scanf("%d",&n);
 
for(i=0;i<N;i++){
  row[i]=FREE;
  col[i]=FREE;
  for(j=0;j<N;j++){
    B[i][j] =0;
  }
}
 
for(i=0;i<N*2-1;i++){
  dpos[i]=FREE;
  dneg[i]=FREE;
}
 
for(i=0;i<n;i++){
  scanf("%d %d",&x,&y);
  B[x][y] = NOT_FREE;
}
putQueen(0);
 
return 0;
}