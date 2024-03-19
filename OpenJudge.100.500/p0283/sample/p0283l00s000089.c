#include <stdio.h>
#define NOT_FREE 1
#define FREE -1
#define N 8

int B[N][N], row[N], col[N],dpos[2 * N - 1], dneg[2 * N - 1], row[N];//?????????????????????????¨?


void init(){
  int i;
  for(i = 0; i < N; i++) row[i] = col[i] = FREE;
  for(i = 0; i < 2 * N - 1; i++) dpos[i] = dneg[i] = FREE;
}

void printBoard(){
  int i, j;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(B[i][j]){
	if(row[i] != j){
	  //	   printf("%d %d %d\n", i, j, row[i]);
	  return;
	}
      }
    }
  }
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(row[i] == j)	printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQueen(int i){
  int j; 

  if(i == N){ //
    printBoard();
    return;
  }
  for(j = 0; j < N; j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) continue;
    // put a queen at (i, j)
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    // try the next row
    putQueen(i+1);
    // remove the queen at (i, j) for backtracking
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}
			  
int main()
{
  int k, r, c, i, j;

  init();

  for(i = 0; i < N; i++)
    for(j = 0; j < N; j++) B[i][j] = 0;
  
  scanf("%d", &k);
  for(i = 0; i < k; i++){
    scanf("%d %d", &r, &c);
    B[r][c] = 1;
  }
  putQueen(0);

  return 0;
}