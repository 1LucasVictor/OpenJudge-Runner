#include<stdio.h>
#include<stdlib.h>
#define N 8
#define Free 0
#define Not_Free 1
#define TRUE 1
#define FALSE -1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1],B[N][N];

void printBoad(){
  int i,j;
  for(i =0;i < N;i++){
    for(j =0;j < N;j++){
      if(B[i][j] == TRUE){
          if(row[i] != j){
             return;
           }
        }
    }
  }
  for(i =0;i < N;i++){
    for(j =0;j < N;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}int putQueen(int i){
  int j;
  if(i == N){
    printBoad();
    return 0;
  }
  for(j =0;j < N;j++){
    if(col[j] == Not_Free||dpos[i + j] == Not_Free||dneg[i -j+N-1] == Not_Free){
      continue;
    }
    row[i] = j;
    col[j] = dpos[i + j] = dneg[i-j+N-1] = Not_Free;
    putQueen(i + 1);
    row[i] = col[j] = dpos[i + j]  = dneg[i-j+N-1] = Free;
  }
  return 0;
}

int main(){
  int i,j,k,r,c;
  for(i =0;i < N;i++){
    row[i] = Free;
    col[i] = Free;
  }
  for(i =0;i < 2*N -1;i++){
    dpos[i] = Free;
    dneg[i] = Free;
  }
  for(i =0;i < N;i++){
    for(j =0;j < N;j++){
      B[i][j] = FALSE;
    }
  }
  scanf("%d",&k);
  for(i =0;i < k;i++){
    scanf("%d%d",&r,&c);
    B[r][c] = TRUE;
  }
  putQueen(0);
  return 0;
}

