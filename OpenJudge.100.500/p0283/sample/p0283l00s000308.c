#include <stdio.h>
#define N 8
#define YES 1
#define NO 0

int X[N],Y[N],L_U[2*N - 1],R_U[2*N - 1];

char Board[N][N];

void print(){
  int i,j;
  for(i = 0 ; i < N; i++){
    for(j = 0; j < N; j++){
      if(Board[i][j] == 'Q' && X[i] != j)return;
    }
  }
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(X[i] == j) Board[i][j] = 'Q';
    }
  }
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      printf("%c",Board[i][j]);
    }
    printf("\n");
  }
}

void Solve(int i){
  int j;
  if(i == N) {
    print();
    return;
  }
  for(j = 0; j < N; j++){
    if(Y[j] == NO || L_U[i + j] == NO || R_U[i - j +  N - 1] == NO) continue;
    X[i] = j;
    Y[j] = L_U[i + j] = R_U[i - j + N - 1] = NO;
    Solve(i + 1);
    X[i] = Y[j] = L_U[i + j] = R_U[i - j + N - 1] = YES;
  }

}

int main()
{
  int n,i,j,r,c;
  /*Initialize*/
  for(i = 0; i < N; i++) {
    X[i] = YES;
    Y[i] = YES;
  }
  for(i = 0; i < 2*N-1; i++) {
    L_U[i] = YES;
    R_U[i] = YES;
  }
  for(i = 0; i < N;i++){
    for(j = 0; j < N; j++){
      Board[i][j] = '.';
    }
  }
  /*main*/    
  scanf("%d",&n);
  for(i = 0; i < n;i++){
    scanf("%d%d",&r,&c);
    Board[r][c] = 'Q';
  }
  Solve(0);

  return 0;
}

