#include <stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE 0

void printBoard();
void putQueen(int);

int row[N],col[N],dpos[2*N-1],dneg[2*N-1],x[N][N];

int main(){
  int i,j,n,r,c;

  for(i=0;i<N;i++) row[i]=col[i]=FREE;

  for(i=0;i<2*N-1;i++) dpos[i]=dneg[i]=FREE;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      x[i][j]=0;
    }
  }

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    x[r][c]=1;
  }

  putQueen(0);
  
  return 0;
}

void printBoard(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(x[i][j]==1){
        if(row[i]!=j) return;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j) printf("Q");
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
    if(col[j]==NOT_FREE||dpos[i+j]==NOT_FREE||dneg[i-j+N-1]==NOT_FREE) continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
  
    putQueen(i+1);
  
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }

}
