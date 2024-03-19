#include<stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE 0

int queen[N][N],col[N],dpos[N+N-1],dneg[N+N-1],row[N];

void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
    if(row[i]!=j) printf(".");
    else printf("Q");
  }
    printf("\n");
  }
}

void putQueen(int i){
  int j;
  if(i==N){
    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	if(queen[i][j]==NOT_FREE){
	  if(row[i]!=j) return;
	}
      }
    }
    printBoard();
    return;
  }

  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE) continue;

      row[i]=j;
      col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
      putQueen(i+1);
      col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

int main(){
  int i,j,k,r,c;

  scanf("%d",&k);

  for(i=0;i<N;i++) for(j=0;j<N;j++) queen[i][j]=FREE;

  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    queen[r][c]=NOT_FREE;
  }

  putQueen(0);

  return 0;

}
  

