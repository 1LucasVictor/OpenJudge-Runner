#include<stdio.h>

#define N 8

typedef struct _chess{
  int row[N];
  int col[N];
  int dpos[2*N-1];
  int dneg[2*N-1];
}Chess;

void initialize(Chess);
void putQueen(int);
void print(void);

Chess chess;
int X[N][N];

int main(){
  int i,j;
  int k;
  int r,c;

  initialize(chess);
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      X[i][j]=0; /* false */
    }
  }

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    X[r][c]=1; /* true */
  }

  putQueen(0);

  return 0;
}

void initialize(Chess c){
  int i;
  for(i=0;i<N;i++){
    c.row[i]=-1;
    c.col[i]=-1;
  }
  for(i=0;i<2*N-1;i++){
    c.dpos[i]=-1;
    c.dneg[i]=-1;
  }
}

void putQueen(int i) {
  if(i==N){
    /* print */
    print();
    return;
  }

  for(int j=0;j<N;j++){
    if(chess.col[j]==1 ||chess.dpos[i+j]==1 ||chess.dneg[i-j+N-1]==1) continue;
    chess.row[i]=j;
    chess.col[j]=chess.dpos[i+j]=chess.dneg[i-j+N-1]=1;
    putQueen(i+1);
    chess.row[i]=chess.col[j]=chess.dpos[i+j]=chess.dneg[i-j+N-1]=-1;
  }
}

void print(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]==1){
        if(chess.row[i]!=j) return;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("%c",(chess.row[i]==j)?'Q':'.');
    }
    printf("\n");
  }
}


