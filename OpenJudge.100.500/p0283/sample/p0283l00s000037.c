#include <stdio.h>
#define N 8
int A[N][N];
int Row[N];
int Col[N];
int Dpos[2*N-1];
int Dneg[2*N-1];

void printBoard(){
  int i, j;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(A[i][j] == 1){
	if(Row[i] != j){
	  return;
	}
      }
    }
  }
  
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(Row[i] == j){
	printf("Q");
      }
      else printf(".");
    }
    printf("\n");
  }
}

int putQueen(int i){
  int j;
  
  if(i == N){
    printBoard();
    return 0;
  }

  for(j = 0; j < N; j++){
    if(Col[j] == 1 || Dpos[i+j] == 1 || Dneg[i-j+N-1] == 1){
      continue;
    }
    //put a queen at (i,j)
    Row[i] = j;
    Col[j] = Dpos[i+j] = Dneg[i-j+N-1] = 1;
    //try the next row
    putQueen(i+1);
    //remove the queen at (i,j) for backtracking
    Col[j] = Dpos[i+j] = Dneg[i-j+N-1] = 0;
  }
  
}

int main(){
  int k, i, r, c;
  
  scanf("%d",&k);
  for(i = 0; i < k; i++){
    scanf("%d %d",&r, &c);
    A[r][c] = 1;
  }

  putQueen(0);

  return 0;
}

