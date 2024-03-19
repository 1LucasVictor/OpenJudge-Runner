#include<stdio.h>
#define N 8

int Location[N][N];
int row[N];
int col[N];
int attackR[2*N-1];
int attackL[2*N-1];

void init(){
  int i,j;
  for(i=0;i<N;i++)row[i]=col[i]==-1;
  for(i=0;i<2*N-1;i++) attackR[i]=attackL[i]=-1;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      Location[N][N]=-1;
    }
  }
}

void printLocation(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(Location[i][j]==1&&row[i]!=j)return;
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
    printLocation();
    return ;
  }
  for(j=0;j<N;j++) {
    if(col[j]==1||attackL[j+i]==1||attackR[i-j+N-1]==1)continue;
    row[i]=j;
    col[j]=attackL[j+i]=attackR[i-j+N-1]=1;
    putQueen(i+1);
    col[j]=attackL[j+i]=attackR[i-j+N-1]=-1;
  }
}
int main(){
  int n;
  int r,c,i;
  init();
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    Location[r][c]=1;
  }
  putQueen(0);
  return 0;
}