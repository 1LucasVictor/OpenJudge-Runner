#include<stdio.h>

#define N 8
#define FREE 1
#define NOT_FREE 0

int row[N],col[N],dpos[15],dneg[15],A[N][N];
int i,j,n,r,c;

void printBoard(){
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i][j]&&row[i]!=j)return;
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQueen(int i){
  int j;
  if(i==N){
    printBoard();
    return;
  }

  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE||dpos[i+j]==NOT_FREE||dneg[i-j+N-1]==NOT_FREE)continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    putQueen(i+1);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

int main(){
  scanf("%d",&n);

  for(i=0;i<15;i++){
    dpos[i]=dneg[i]=FREE;
  }

  for(i=0;i<N;i++){
    col[i]=row[i]=FREE;
    for(j=0;j<N;j++){
      A[i][j]=0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    A[r][c]=90;
  }
  putQueen(0);
  return 0;
}

