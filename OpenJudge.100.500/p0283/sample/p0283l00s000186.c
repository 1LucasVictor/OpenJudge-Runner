#include<stdio.h>

#define N 8
#define FREE 0
#define N_FREE 1

int k;
int R[N],C[N],row[N],col[N];
int dpos[2*N-1],dneg[2*N-1];  /*dpos:右から左への斜め線,dneg:dposの逆*/

void putQueen(int);
void printBoard(void);

int main(){
  int r,c,i;

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    R[i]=r;
    C[i]=c;
    row[r]=c;
    col[c]=dpos[r+c]=dneg[r-c+N-1]=N_FREE;
  }

  putQueen(0);

  return 0;
}

void putQueen(int i){
  int j,n;

  if(i==N){
    printBoard();
    return;
  }

  for(j=0;j<N;j++){
    /*初期条件で置かれているときの処理*/
    for(n=0;n<k;n++){
      if(R[n]==i && C[n]==j){
	row[i]=j;
	putQueen(i+1);
      }
    }
    
    if(col[j]==N_FREE || dpos[i+j] == N_FREE || dneg[i-j+N-1]==N_FREE) continue;
    
    /*put a queen at (i,j)*/
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=N_FREE;

    /*try the next row*/
    putQueen(i+1);
    
    /*remove the queen at (i,j) for backtrabking*/
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

void printBoard(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

