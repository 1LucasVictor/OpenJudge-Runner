#include <stdio.h>
#define FREE -1
#define NOT_FREE -2
#define N 8

void putQueen(int);
void printBoard(void);

int row[N];
int col[N];
int dpos[2*N];
int dneg[2*N];

int main(){
  int n,i,j,x,y;

  scanf("%d",&n);

  for(i=0; i < N; i++){
   row[i] =  col[i] = FREE;
  }

  for(i=0; i < 2*N; i++){
    dpos[i] = dneg[i] = FREE;
  }

  for(i=0; i < n; i++){
    scanf("%d%d",&y,&x);
    row[y] = x;
    col[x] = NOT_FREE;
    dpos[y + x] = NOT_FREE;
    dneg[y - x +(N - 1)] = NOT_FREE;
  }

  putQueen(0);

  return 0;
}

void putQueen(int i){
  int j;
  if(i == N){
    printBoard();
    //printf("\n");
    //exit(-1);
    return;
  }
  // append
  if(row[i] != FREE) {
    putQueen(i+1);
    return;
  }
  // 
  for(j=0; j < N; j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    //printf("%d %d\n", i, j);
    //printBoard();
    //printf("\n");
    putQueen(i+1);
    row[i] = FREE; // append
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

void printBoard(void){
  int i,j;
  for(i=0; i < N; i++){
    for(j=0; j < N; j++){
      if(row[i] == j){
	printf("Q");
      } else {
	printf(".");
      }
    }
    printf("\n");
  }
}

