#include<stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int rowtw[N],coltw[N],dpostw[2*N-1],dnegtw[2*N-1];

int Xtw[N][N];

void initialize(){
  for(int i=0;i<N;i++){
    rowtw[i]=FREE;
    coltw[i]=FREE;
  }
  for(int i=0;i<2*N-1;i++){
    dpostw[i]=FREE;
    dnegtw[i]=FREE;
  }
}

void printBoard(){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(Xtw[i][j]){
	if(rowtw[i]!=j)return;
      }
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(rowtw[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void recursive(int i){
  if(i==N){
    printBoard();
    return;
  }

  for(int j=0;j<N;j++){
    if(NOT_FREE==coltw[j]||
       NOT_FREE==dpostw[i+j]||
       NOT_FREE==dnegtw[i-j+N-1])continue;
    rowtw[i]=j;
    coltw[j]=dpostw[i+j]=dnegtw[i-j+N-1]=NOT_FREE;
    recursive(i+1);
    rowtw[i]=coltw[j]=dpostw[i+j]=dnegtw[i-j+N-1]=FREE;
  }
}

int main(){
  initialize();

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++)Xtw[i][j]=0;
  }

  int k;
  scanf("%d",&k);
  for(int i=0;i<k;i++){
    int r,c;
    scanf("%d %d",&r,&c);
    Xtw[r][c]=1;
  }

  recursive(0);

  return 0;
}

