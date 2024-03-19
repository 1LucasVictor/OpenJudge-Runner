#include <stdio.h>
#define N 8

int row[N], col[N], dpos[2*N-1], dneg[2*N-1], X[N][N];

void initialize();
void printboard();
void recursive(int);

int main(){
  int k, r, c;
  int i, j;
  
  initialize();
  for(i=0; i<N; i++){
    for(j=0; j<N; j++)X[i][j] = 0;
  }

  scanf("%d",&k);
  for(i=0; i<k; i++){
    scanf("%d%d",&r,&c);
    X[r][c] = 1;
  }

  recursive(0);
  return 0;
}

void initialize(){
  int i;
  for(i=0; i<N; i++){
    row[i] = 1;
    col[i] = 1;
  }
  for(i=0; i<2*N-1; i++){
    dpos[i] = 1;
    dneg[i] = 1;
  }
}

void Printboard(){
  int i, j;
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(X[i][j]){
	if(row[i] != j)return;
      }
    }
  }
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(row[i] == j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;
  if(i == N){
    Printboard();
    return;
  }
  for(j=0; j<N; j++){
    if(-1 == col[j] || -1 == dpos[i+j] || -1 == dneg[i-j+N-1])continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = -1;
    recursive(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = 1;
  }
}

