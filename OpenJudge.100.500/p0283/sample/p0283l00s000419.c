#include <stdio.h>
#include <stdlib.h>
#define N 8
#define SET 1
#define FREE 1
#define NOTFREE -1
void setQueen(int);
void printField();
int n;
int field[N][N];
int row[N], col[N], dpos[2 * N - 1], dneg[2 * N -1];
int main(){
  int i,j;
  int r,c;
  scanf("%d",&n);
 
 
  
  for(i=0;i<N;i++){
   row[i] = FREE;
   col[i] = FREE;
  }
  for(i=0; i < 2 * N - 1; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
  
  for(i=0;i<n;i++){
    scanf("%d %d",&r,&c);
    field[r][c] = SET;
  }

  setQueen(0);
    
  
  return 0;
}

void setQueen(int i){
  int j;
  if(i == N){
    printField();
    return;
  }

  
  for(j=0;j<N;j++){
    if( col[j] == NOTFREE || dpos[i+j] == NOTFREE || dneg[i - j + N - 1] == NOTFREE){
      continue;
    }
    row[i] = j;
    col[j] = NOTFREE;
    dpos[i+j] = NOTFREE;
    dneg[i - j + N -1] = NOTFREE;

    setQueen(i+1);
    row[i] = FREE;
    col[j] = FREE;
    dpos[i+j] = FREE;
    dneg[i - j + N -1] = FREE;
  } 
}

void printField(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(field[i][j] == 1){
	if(row[i] != j) return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
     if(row[i] == j ) printf("Q");
     else printf(".");
    }
    printf("\n");
  }
}

