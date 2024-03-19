#include <stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE -1

int col[N];
int row[N];
int dpos[2*N-1];
int dneg[2*N-1];
int board[N][N];

void putQueen(int i);
void printboard(void);
void initialize(void);

int main()
{
  int k,i,j,u,v;

  initialize();

  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      board[i][j] = 0;
    }
  }


  scanf("%d",&k);
  for(i = 0;i < k;i++){
    scanf("%d %d",&u,&v);
    board[u][v] = 1;
  }

  putQueen(0);

  return 0;
}

void putQueen(int i)
{
  int u,j;
  
  if(i == N){
    printboard();
    return ;
  }

  for(j = 0;j < N;j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE){
      continue;
    }
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    putQueen(i+1);

    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

void printboard(void)
{
  int i,j;

  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(board[i][j]){
	if(row[i] != j) return ;
      }
    }
  }
  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void initialize(void)
{
  int i;
  for(i = 0;i < N;i++){
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i = 0;i < 2*N-1;i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}
    

  

