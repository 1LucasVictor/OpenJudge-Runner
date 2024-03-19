#include <stdio.h>

#define FREE 0
#define NOT_FREE 1
#define N 8

int row[N],col[N],dpos[N*2-1],dneg[N*2-1];
int Q[N][N];

void printBoard()
{
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(Q[i][j]==1){
	if(row[i]!=j)return;
      }
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


void putQueen(int i)
{
  int j;
  //クイーンの配置に成功
  if(i==N){
    printBoard();
    return;
  }

  for(j=0;j<N;j++){
    //iとjが他のクイーンに襲撃されている場合は無視
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE)continue;
    //(i,j)にクイーンを置く
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    putQueen(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}


int main()
{
  int n,i,j,a,b;
  for(i=0;i<N;i++)
    {
      row[i]=FREE;
      col[i]=FREE;
    }
  for(i=0;i<2*N-1;i++)
    {
      dneg[i]=FREE;
      dpos[i]=FREE;
    }
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      Q[i][j]=0;
    }
  }
    
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    Q[a][b]=1;
  }
  
  putQueen(0);

  return 0;
}
  
  

