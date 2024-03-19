#include<stdio.h>
#define N 8
#define FREE 0
#define NOT_FREE 1
int row[N],col[N],dpos[2*(N-1)],dneg[2*(N-1)];
void printBoard(int (*G)[N]){//出力
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(G[i][j]==1){//もし同じ列にQがいたら
	if(row[i]!=j){//
	  return;
	}
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){
	printf("Q");
      }else printf(".");
    }
    printf("\n");
  }
}
void putQueen(int (*G)[N],int i){
  int j;
  if(i==N){
    printBoard(G);
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE){
      continue;
    }
    col[j]=NOT_FREE;
    dpos[i+j]=NOT_FREE;
    dneg[i-j+N-1]=NOT_FREE;
    row[i]=j;
    putQueen(G,i+1);
    col[j]=FREE;
    dpos[i+j]=FREE;
    dneg[i-j+N-1]=FREE;
  }
}
int main(){
  int i,j;
  int k,r,c;
  int G[N][N];
  for(i=0;i<N;i++){//行と列の初期化
    row[i]=FREE;
    col[i]=FREE;
    for(i=0;i<2*N-1;i++){//斜めの初期化
      dpos[i]=FREE;
      dneg[i]=FREE;
    }
    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	G[i][j]=0;
      }
    }
    scanf("%d",&k);
    for(i=0;i<k;i++){
      scanf("%d%d",&r,&c);
      G[r][c]=1;
    }
    putQueen(G,0);
    return 0;
  }
}



