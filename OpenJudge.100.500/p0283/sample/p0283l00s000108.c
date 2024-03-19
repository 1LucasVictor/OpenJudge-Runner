#include <stdio.h>

#define N 8
#define free -1
#define not_free 1

void putQueen(int);
void printBoard();
void print();

int row[N],col[N],dpos[2 * N - 1],dneg[2 * N - 1],x[N][N];

int main()
{
  int i,j,d,r,c;
  for(i=0;i<N;i++){
    row[i] = free;
    col[i] = free;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i] = free;
    dneg[i] = free;
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      x[i][j] = 0;
    }
  }
  scanf("%d",&d);
  for(i=0;i<d;i++){
    scanf("%d %d",&r,&c);
    x[r][c] = 1;
  }//printf("a");
  putQueen(0);

  return 0;
  
}

void putQueen(int i)
{
  int j;

  if(i == N){
    printBoard();
    return;
  }
  for(j=0;j<=N-1;j++){
    if(col[j] == not_free || dpos[i + j] == not_free || dneg[i - j + N - 1] == not_free){
      continue;
    }
    //put a queen at (i,j)
    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = not_free;
    //try the next row
    putQueen(i + 1);
    // remove the queen at (i,j) for backtracking
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = free;
  }
}

void printBoard()
{
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(x[i][j]){
	if(row[i] != j) return;
      }
    }
  }
  print();
}

void print()
{
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}


  
  

