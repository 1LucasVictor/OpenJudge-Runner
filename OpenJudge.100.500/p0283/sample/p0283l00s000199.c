#include<stdio.h>
#define BS 8 //BoardSize
#define NOT_FREE 1
#define FREE 0
#define noQueen -1
#define Queen 2

void putQueen(int);
void printBoard(void);

int board[BS][BS];
int row[BS],col[BS],dpos[2*BS-1],dneg[2*BS-1];

int main(){
  int i,j,k,r,c;
  for(i=0;i<BS;i++){
    row[i]=col[i]=FREE;
  }
  for(i=0;i<2*BS-1;i++){
    dpos[i]=dneg[i]=FREE;
  }
  
  for(i=0;i<BS;i++){
    for(j=0;j<BS;j++){
      board[i][j]=noQueen;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    board[r][c]=Queen;
  }

  putQueen(0);

  return 0;
}

void printBoard(){
  int i,j;
  for(i=0;i<BS;i++){
    for(j=0;j<BS;j++){
      if(board[i][j]!=noQueen){
	if(row[i]!=j)return;
      }
    }
  }
 
  for(i=0;i<BS;i++){
    for(j=0;j<BS;j++){
      if(row[i]==j){
	printf("Q");
      }else{
	printf(".");
      }
    }
    printf("\n");
  }
}


void putQueen(int i){
  int j;
  if(i==BS){
    printBoard(); 
    return;
  }

  for(j=0;j<BS;j++){
    if(col[j]==NOT_FREE||dpos[i+j]==NOT_FREE||dneg[i-j+BS-1]==NOT_FREE){
      continue;
    }
    // put a queen at (i, j)
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+BS-1]=NOT_FREE;
    // try the next row
    putQueen(i+1);
    // remove the queen at (i, j) for backtracking
    row[i]=col[j]=dpos[i+j]=dneg[i-j+BS-1]=FREE;
  }
}

