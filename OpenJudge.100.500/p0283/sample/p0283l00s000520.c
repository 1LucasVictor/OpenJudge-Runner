#include<stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 9999
#define PUT 1
#define NOT_PUT 0

int p[N+1][N+1];
int dpos[2*N+1] = {FREE};
int dneg[2*N+1] = {FREE};
int col[N+1] = {FREE};
int row[N+1] = {FREE};

//最後の行で出力できるかどうか確認
void backTracking()
{
  int i,j;
  
  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(p[i][j] == PUT){
	if(row[i] != j) return;
      }
    }
  }
  //printf("Tracking ended\n");

  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQueen(int i)
{
  if(i == N){
    backTracking();
    return;
  }
  
  int j;
  for(j = 0;j < N;j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) continue;

    //put a queen at (i, j)
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;

    //try the next row
    putQueen(i+1);
    
    //remove the queen at (i, j) for backtracking
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

int main()
{
  int i,j,k;
  int n;

  scanf("%d", &n);

  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++) p[i][j] = NOT_PUT;
  }
  
  for(k = 0;k < n;k++){
    scanf("%d%d", &i, &j);
    p[i][j] = PUT;
  }

  putQueen(0);

  /*for(i = 0;i < N;i++){
    for(j = 0;j < N;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
    }
  */
  return 0;
}

