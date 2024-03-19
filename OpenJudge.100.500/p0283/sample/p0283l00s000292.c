#include<stdio.h>
#include<string.h>
#include <stdbool.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N];
int col[N];
int dpos[2*N-1];
int dneg[2*N-1];
bool x[N][N];

void initial(){
  int i,j;
  for(i=0; i < N; i++){
    row[i] = FREE;
    col[i] = FREE;
    //printf("%d %d\n",row[i],col[i]);
  }
  for(j=0; j < 2*N-1; j++){
    dpos[j] = FREE;
    dneg[j] = FREE;
    //printf("%d %d\n",dpos[j],dneg[j]);
  }
}

void printBoard(){
  int i,j;
  for(i=0; i < N; i++){
    for(j=0; j < N; j++){
      if(x[i][j]){
	if(row[i] != j) return;
      }
    }
  }
  for(i=0; i < N; i++){
    for(j=0; j < N; j++){
      printf("%s",(row[i] == j) ? "Q" : ".");
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;
    
  if( i == N){
    printBoard();
    return;
  }

  for(j=0; j < N; j++){
    if( NOT_FREE == col[j] || NOT_FREE == dpos[i + j] || NOT_FREE == dneg[i-j+N-1]) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    recursive(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
  
}

int main(){
  int i,j;
  int k,r,c;
  
  initial();

  for(i=0; i < N; i++){
    for(j=0; j < N; j++){
      x[i][j] = false;
    }
  }

  scanf("%d",&k);
  for(i=0; i < k; i++){
    scanf("%d%d",&r,&c);
    x[r][c] = true;
  }

  recursive(0);

  return 0;
}

