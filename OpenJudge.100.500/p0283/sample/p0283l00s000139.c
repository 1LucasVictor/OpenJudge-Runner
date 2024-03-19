#include<stdio.h>
#define N1 8
#define N2 15
#define FREE 1
#define NOTFREE -1

void putQueen(int);
void printBoard();

int row[N1],col[N1],dpos[N2],dneg[N2],board[N1][N1];

int main(){
  int i,j,k,r,c;
  for(i=0;i<N1;i++){
    row[i]=FREE;
    col[i]=FREE;
    for(j=0;j<N1;j++){
      board[i][j]=0;
    }
  }
  for(i=0;i<N2;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    board[r][c]=1;
  }

  putQueen(0);
  return 0;
}

void putQueen(int i){
  int j;
  if(i==N1){
    printBoard();
    return;
  }
  for(j=0;j<N1;j++){
    if(col[j]==NOTFREE || dpos[i+j]==NOTFREE || dneg[i-j+N1-1]==NOTFREE){
      continue;
    }
    row[i]=j;
    col[j]=NOTFREE;
    dpos[i+j]=NOTFREE;
    dneg[i-j+N1-1]=NOTFREE;
    putQueen(i+1);
    col[j]=FREE;
    dpos[i+j]=FREE;
    dneg[i-j+N1-1]=FREE;
  }
}

void printBoard(){
  int i,j;
  for(i=0;i<N1;i++){
    for(j=0;j<N1;j++){
      if(board[i][j]==1&&row[i]!=j){
	return;
      }
    }
  }
  
  for(i=0;i<N1;i++){
    for(j=0;j<N1;j++){
      if(row[i]==j){
	printf("Q");
      }else{
	printf(".");
      }
    }
    printf("\n");
  }
}

