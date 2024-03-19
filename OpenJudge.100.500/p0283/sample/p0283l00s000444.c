#include <stdio.h>

#define MAX 8
#define TRUE 2
#define FALSE -2
#define FREE -1
#define NOT_FREE 1

void initialize();
void printBoard();
void recursive(int);

int row[MAX];
int col[MAX];
int dpos[2 * MAX - 1];
int dneg[2 * MAX - 1];
int judge[MAX][MAX];

int main(){
  int i,j,k;
  int c,r;
  
  initialize();

  for (i = 0;i < MAX;i++)
    for (j = 0;j < MAX;j++)
      judge[i][j] = FALSE;

  scanf("%d",&k);
  
  for (i = 0;i < k;i++){
    scanf("%d %d",&r,&c);
    judge[r][c] = TRUE;
  }

  recursive(0);
  
  return 0;
}

void initialize(){
  int i,j;

  for (i = 0;i < MAX;i++){
    row[i] = FREE;
    col[i] = FREE;
  }

  for (i = 0;i < 2 * MAX - 1;i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

void printBoard(){
  int i,j;

  for (i = 0;i < MAX;i++)
    for (j = 0;j < MAX;j++)
      if (judge[i][j] == 2)
	if (row[i] != j)
	  return;
  
  for (i = 0;i < MAX;i++){
    if (i)
      printf("\n");
    
    for (j = 0;j < MAX;j++)
      if (row[i] == j)
	printf("Q");

      else
	printf(".");
  }

  printf("\n");
}

void recursive(int i){
  int j;
  
  if (i == MAX){
    printBoard();
    return;
  }

  for (j = 0;j < MAX;j++){
    if (NOT_FREE == col[j] || NOT_FREE == dpos[i + j]
	|| NOT_FREE ==dneg[i - j + MAX - 1])
      continue;

    row[i] = j;
    col[j] = NOT_FREE;
    dpos[i + j] = NOT_FREE;
    dneg[i - j + MAX - 1] = NOT_FREE;

    recursive(i + 1);

    row[i] = FREE;
    col[j] = FREE;
    dpos[i + j] = FREE;
    dneg[i - j + MAX -1] = FREE;
  }
}

