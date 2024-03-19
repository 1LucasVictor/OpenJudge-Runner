#include <stdio.h>
#define N 8

int row[N],col[N],dpos[2*N],dneg[2*N];
int X[N][N];

void calc(){
  int i;
  for(i=0; i<N; i++){
    row[i] = -1;
    col[i] = -1;
  }
  for(i=0; i<2*N-1; i++){
    dpos[i] = -1;
    dneg[i] = -1;
  }
}

void print(){
  int i,j;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(X[i][j]){
        if(row[i] != j) return;
      }
    }
  }

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(row[i]==j) printf("Q");
      else {
        printf(".");
      }
    }
    printf("\n");
  }
}

void condition(int i){
  int j;
  if(i==N){
    print();
    return ;
  }
  for(j=0; j<N; j++){
    if(col[j] == 1 || dpos[i+j] == 1 || dneg[i-j + N-1] == 1) continue;

    row[i] = j;
    col[j] = dpos[i+j] =dneg[i-j+N-1] = 1;

    condition(i+1);

    row[i] = col[j] = dpos[i+j] = dneg[i-j + N-1] =-1;
  }
}

int main(){
  int i,j,k,c,r;
  calc();

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      X[i][j] = 0;
    }
  }

  scanf("%d",&k);

  for(i=0; i<k; i++){
    scanf("%d%d",&r,&c);
    X[r][c] = 1;
  }
  condition(0);

  return 0;
}

