#include<stdio.h>

#define FREE 0
#define NOT_FREE 1
#define EXIST 2
#define EMPTY -1
#define MAX 8
#define DMAX 15

void putQueen(int);
void print(void);

int row[MAX],col[MAX],dpos[DMAX],dneg[DMAX];
int res[MAX][MAX];
int main(){
  int i,j,k,r,c;
 
  for(i=0; i<MAX; i++){
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i=0; i<DMAX; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
  for(i=0; i<MAX; i++){
    for(j=0; j<MAX; j++){
      res[i][j] = EMPTY;
    }
  }
  
  scanf("%d",&k);
  for(i=0; i<k; i++){
    scanf("%d%d",&r,&c);
    res[r][c] = EXIST;
  }
  
  putQueen(0);
  return 0;
}

void putQueen(int i){
  int j;

  if(i == MAX){
    print();
    return;
  }

  for(j=0; j<MAX; j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+MAX-1] == NOT_FREE) continue;
    row[i] = j;
    col[j] = NOT_FREE;
    dpos[i+j] = NOT_FREE;
    dneg[i-j+MAX-1] = NOT_FREE;

    putQueen(i+1);

    col[j] = FREE;
    dpos[i+j] = FREE;
    dneg[i-j+MAX-1] = FREE;
  }
}

void print(){
  int i,j;
  
  for(i=0; i<MAX; i++){
    for(j=0; j<MAX; j++){
      if(res[i][j] == EXIST){
	if(row[i] != j) return;
      }
    }
  }

  for(i=0; i<MAX; i++){
    for(j=0; j<MAX; j++){
      if(row[i] == j) res[i][j] = EXIST;
    }
  }

   for(i=0; i<MAX; i++){
    for(j=0; j<MAX; j++){
      if(res[i][j] == EXIST) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

