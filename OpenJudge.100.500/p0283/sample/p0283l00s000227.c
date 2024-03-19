#include<stdio.h>
#include<stdbool.h>
#define N 8
#define free -1
#define nfree 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];

bool X[N][N];

void initialize(){
  int i;
  for(i=0;i<N;i++){
    row[i] = free;
    col[i] = free;
  }

  for(i=0;i<2*N-1;i++){
    dpos[i] = free;
    dneg[i] = free;
  }
}

void PrintBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]){
        if(row[i] != j)return;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j)printf("Q" );
      else printf(".");
    }
    printf("\n" );
  }
}

void recursive(int i){
  if(i==N){
    PrintBoard();
    return;
  }

  for(int j =0;j<N;j++){
    if(nfree == col[j] ||
       nfree == dpos[i+j] ||
       nfree == dneg[i-j+N-1])continue;
       row[i] = j;
       col[j] = dpos[i+j] = dneg[i - j + N -1] = nfree;
       recursive(i+1);
       col[j] = dpos[i+j] = dneg[i - j + N -1] = free;
   }
}


int main(){
  initialize();

  for(int i = 0;i<N;i++){
    for(int j = 0;j < N;j++){
      X[i][j] = false;
    }
  }

  int k,r,c;
  scanf("%d",&k);

  for(int i;i<k;i++){
    scanf("%d%d",&r,&c);
    X[r][c] = true;
  }
  recursive(0);

  return 0;
}

