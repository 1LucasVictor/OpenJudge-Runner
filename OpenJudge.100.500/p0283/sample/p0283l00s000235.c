#include <stdio.h>
#include <stdlib.h>


#define N 8

int row[N],col[N],drops[2*N-1],dneg[2*N-1];

int X[N][N];

void initialize(){
  int i,j;
  for(i=0;i<N;i++) {
    row[i]=-1;
    col[i]=-1;
  }
  for(i=0;i<2*N-1;i++){
    drops[i]=-1;
    dneg[i]=-1;
  }
}

void printBoard(){
  int i,j;
  char word;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]==1){
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

void recursive(int i){
  int j;
  if(i==N){
    printBoard();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==1 || drops[i+j]==1 || dneg[i-j+N-1]==1) continue;
    row[i]=j;
    col[j]=1;
    drops[i+j]=1;
    dneg[i-j+N-1]=1;
    recursive(i+1);
    row[i]=-1;
    col[j]=-1;
    drops[i+j]=-1;
    dneg[i-j+N-1]=-1;
  }
}

int main()
{
  int i,j,k,r,c;
  initialize();

  for(i=0;i<N;i++){
    for(j=0;j<N;j++) X[i][j]=0;
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    X[r][c]=1;
  }
  recursive(0);

  return 0;
}