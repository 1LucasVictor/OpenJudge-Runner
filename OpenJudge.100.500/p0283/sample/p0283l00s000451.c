#include<stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE 1
#define TRUE 1
#define FALSE 0

void initialize(void);
void printBoard(void);
void recursive(int);

int row[N],col[N],dpos[2*N-1],dneg[2*N-1],X[N][N];

int main(void){
  int k,r,c;
  int i,j;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      X[i][j] = FALSE;
    }
  }
  
  scanf(" %d",&k);
  for(i = 0; i < k; i++){
    scanf(" %d %d",&r,&c);
    X[r][c] = TRUE;
  }

  recursive(0);
  
  return 0;
}

void initialize(void){
  int i;
  
  for(i = 0; i < N; i++){
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i = 0; i < 2*N-1; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

void printBoard(void){
  int i,j;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(X[i][j]){
	if(row[i] != j)return;
      }
    }
  }
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      printf("%c",(row[i] == j ? 'Q':'.'));
    }
    printf("\n");
  }
}

//get row(i)
void recursive(int i){
  int j;
  if(i == N){ //putting Queen is succeded
    printBoard(); return;
  }

  for(j = 0; j < N; j++){
    //if (i,j) is attacked by others, ignore that case
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE){
      continue;
    }
    //put Queen at (i,j)
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    //try next row
    recursive(i+1);
    //remove Queen from (i,j)
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
  //putting Queen has been failed
}

