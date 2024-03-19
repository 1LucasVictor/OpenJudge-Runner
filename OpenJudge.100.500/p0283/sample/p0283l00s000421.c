#include <stdio.h>
#define N 8
#define N2 2*N-1
#define FREE -1
#define NOT_FREE 1

int row[N],col[N];
int dpos[N2],dneg[N2];
int B[N][N]={};

void PrintBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(B[i][j]){
	if(row[i]!=j)return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){
	printf("Q");
      }else printf(".");
    }
    puts("");
  }
}

void Putqueen(int i){
  int j;
  if(i==N){
    PrintBoard();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE)continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    Putqueen(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

int main(){
  int i,j,k,r,c;
  for(i=0;i<N2;i++){
    if(i<N){
      row[i]=col[i]=FREE;
    }
    dpos[i]=dneg[i]=FREE;
  }
  
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    B[r][c]=NOT_FREE;
  }
  Putqueen(0);
  return 0;
}

