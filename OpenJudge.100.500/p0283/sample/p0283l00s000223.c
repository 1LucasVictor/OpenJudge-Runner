#include <stdio.h>

#define N 8
#define NOT_FREE 1
#define FREE -1

int row[N];
int col[N];
int dpos[2*N-1];
int dneg[2*N-1];
int board[N][N];

void putQueen(int);
void printBoard();
int main(){
  int i, j, x, y, num;

  for(i = 0 ; i < N; i++){
    row[i] = FREE;
    col[i] = FREE;
  }

  for(i = 0 ; i < 2*N-1; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
  
  scanf("%d", &num);
  getchar();
  for(i = 0 ; i < num; i++){
    scanf("%d%d", &x, &y);
    board[x][y] = NOT_FREE;

    row[x] = y;
    col[y] = dpos[x+y] = dneg[x-y+N-1] = NOT_FREE;
  }
  /*
  for(j = 0; j < N; j++){
    printf("%d",row[j]);
  }
  printf("\n");
  for(j = 0; j < N; j++){
    printf("%d",col[j]);
    }
  printf("\n");
  for(j = 0; j < 2*N; j++){
    printf("%d",dpos[j]);
  }
  printf("\n");
    for(j = 0; j < 2*N; j++){
    printf("%d",dneg[j]);
  }
  printf("\n");
  */
  
  putQueen(0);
  return 0;
}

void putQueen(int i){
  int j;
  
  if(i == N){
    printBoard();
    return;
  }
  else  if(row[i] != FREE){
    putQueen(i+1);
  }
  else{
    for(j = 0; j < N; j++){
      if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE){
	continue;
      }
      
      board[i][j] = NOT_FREE;
      //printf("put board[%d][%d]\n", i, j);
      
      row[i] = j;
      col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
      
      putQueen(i+1);
      
      board[i][j] = FREE;
      row[i] = FREE;
      col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
      
    }
    
  }
   
}

void printBoard(){
  int i, j;
  
  for(i = 0 ; i < N; i++){
    for(j = 0; j < N; j++){
      if(board[i][j] == NOT_FREE){
	printf("Q");
      }
      else{
	printf(".");
      }
    }
    printf("\n");
  }
}

