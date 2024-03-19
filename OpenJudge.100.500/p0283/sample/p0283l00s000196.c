#include<stdio.h>
#define FREE 0
#define N_FREE 1
#define Q 2
#define N 8
 
int board[N][N];
int row[N],col[N];
int dneg[2 * N-1],dpos[2 * N-1];


void printboard();
void putQueen(int);


int main(){

  
  int i;
  int k,r,c;

  
  scanf("%d",&k);
  
  for(i=0;i<k;i++){
    scanf("%d",&r);
    scanf("%d",&c);
    board[r][c] = N_FREE; 
  }
   
  putQueen(0);
      
  return 0;
  
}

void printboard(){

  int i, j;
  
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(board[i][j] == N_FREE && row[i] != j)
    return;
    }
  }
  
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(row[i] == j){
	printf("Q");
      }
      else{
	printf(".");
      }
    }
    printf("\n");
  }
}

void putQueen(int i){
  
  int j;
   
  if(i == N){
    
    printboard();
    return;

  }
 
  for(j = 0;j < N;j++){
    if(col[j] == N_FREE || dpos[i + j] == N_FREE || dneg[i - j + N - 1] == N_FREE){ 
      continue;
    }
 
    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = N_FREE; 
 
    putQueen(i + 1);
     
   
   
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
     
 
  }
}