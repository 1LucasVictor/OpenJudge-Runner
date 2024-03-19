#include<stdio.h>
#include<stdlib.h>
#define N 8
#define NOT_FREE 1
#define FREE 0
void putQueen(int);
void printBoard(void);
int M[N][N],row[N],col[N],dneg[2*N-1],dpos[2*N-1];
int main(){
  int k,i,j,r,c;
  scanf("%d",&k);
  for(i=0; i<N; i++){                            //
    col[i] = row[i] = dneg[i] = dpos[i] = FREE;  //
    for(j=0; j<N; j++){                          //
      M[i][j] = 0;                               //
    }                                            //
  }                                              //
  for(i=N; i<(N*2-1); i++){                      //
    dneg[i] = dpos[i] = FREE;                    //
  }                                              //
  for(i=0; i<k; i++){
    scanf("%d%d",&r,&c);
    M[r][c] = 1;
  }
  putQueen(0);
  return 0;
}

void putQueen(int i){
  int j;
  if(i == N){
    printBoard();
    return;
  }
  for(j=0; j<N; j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    putQueen(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}
void printBoard(void){
  int i,j;
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(M[i][j] && row[i] != j) return;
    }
  }
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf((row[i] == j ? "Q" : "."));
      if(j == N-1) printf("\n");
    }
  }
}