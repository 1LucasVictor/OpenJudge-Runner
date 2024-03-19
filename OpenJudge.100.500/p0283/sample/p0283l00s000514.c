#include<stdio.h>

#define MAX 8
#define FREE -1
#define ATACK 1
#define TRUE 100
#define FALSE -100

int row[MAX],col[MAX],dpos[2*MAX-1],dneg[2*MAX-1];
int CHESS[MAX][MAX];

void init(){
  int i;

  for(i = 0; i < MAX; i++)row[i] = col[i] = FREE;
  for(i = 0; i < 2*MAX-1; i++)dpos[i] = dneg[i] = FREE;
  
}

void printBoard(){
  int i,j;

  for(i = 0; i < MAX; i++){
    for(j = 0; j < MAX; j++){
      if(CHESS[i][j] == TRUE){
        if(row[i] != j)return;
      }
    }
  }
  for(i = 0; i < MAX; i++){
    for(j = 0; j < MAX; j++){
      if(row[i] == j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQueen(int i){
  int j;
  
  if(i == MAX){
    printBoard();
    return;
  }

  for(j = 0; j < MAX; j++){
    if(col[j] == ATACK || dpos[i+j] == ATACK || dneg[i-j+MAX-1] == ATACK)continue;
    //put a queen at (i,j)
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+MAX-1] = ATACK;
    //CHESS[i][j] = TRUE;
    //try the next row
    putQueen(i+1);
    //remove the queen at (i,j)
    col[j] = dpos[i+j] = dneg[i-j+MAX-1] = FREE;
    //CHESS[i][j] = FALSE;
  }
  
}

int main(){
  int i,j,k,r,c;

  init();
  for(i = 0; i < MAX; i++){
    for(j = 0; j < MAX; j++)CHESS[i][j] = FALSE;
  }

  scanf("%d",&k);

  for(i = 0; i < k; i++){
    scanf("%d %d",&r,&c);
    CHESS[r][c] = TRUE;
       
  }

  putQueen(0);
  
  return 0;
}


