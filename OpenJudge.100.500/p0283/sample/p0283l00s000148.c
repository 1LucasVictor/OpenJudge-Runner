#include <stdio.h>

#define FREE 0
#define NOT_FREE 1

#define N 8

typedef struct {
  int col[N];
  int dpos[2*N-1];
  int dneg[2*N-1];
  int kotei[N];
}CHECK;
  
int putQueen(int, CHECK *, int *);
void printBoard(int *);

int main()
{
  CHECK check;
  int i, j, k, r, c, row[N];

  for(i = 0; i < N; i++) {
    check.col[i] = FREE;
    row[i] = -1;
    check.kotei[i] = FREE; 
  }
  for(i = 0; i < 2*N-1; i++) {
    check.dpos[i] = FREE;
    check.dneg[i] = FREE;
  }

  
  
  scanf("%d",&k);

  for(i = 0; i < k; i++) {
    scanf("%d%d",&r,&c);
    check.kotei[r] = NOT_FREE;
    row[r] = c;
    check.col[c] = check.dpos[r+c] = check.dneg[r-c+N-1] = NOT_FREE;
  }

  putQueen(0, &check, row);

  return 0;
}

int putQueen(int i, CHECK *check, int *row)
{
  int j;
  
  if(i == N) {
    printBoard(row);
    return 1;
  }
  if(check->kotei[i] == NOT_FREE) {
    if(putQueen(i+1, check, row) == 1) return 1;
    return 0;
  }
  
  for(j = 0; j < N; j++) {   
    if(check->col[j] == NOT_FREE ||
       check->dpos[i+j] == NOT_FREE || check->dneg[i-j+N-1] == NOT_FREE) continue;
    
    //put a queen at (i, j)
    row[i] = j;
    check->col[j] = check->dpos[i+j] = check->dneg[i-j+N-1] = NOT_FREE;
    
    //try the next row
    if(putQueen(i+1, check, row) == 1) return 1;
    
    //remove the queen at (i, j) for backtracking
    check->col[j] = check->dpos[i+j] = check->dneg[i-j+N-1] = FREE;  
  }
  return 0;
}

void printBoard(int *row)
{
  int i, j;
  
  for(i = 0; i < N; i++) {
    for(j = 0; j < row[i]; j++) {
      printf(".");
    }
    printf("Q");
    for(j = row[i]+1; j < N; j++) {
      printf(".");
    }
    printf("\n");
  }
}

