#include<stdio.h>
#define FREE -1
#define NOT_FREE -2
#define N 8
#define M 15
#define QUEEN 100

void printBoard(int a[N][N]){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(a[i][j]==j||a[i][j]==QUEEN){
	printf("Q");
      }else printf(".");
    }
    printf("\n");
  }
  return;
}
void putQueen(int i,int col[N],int row[N],int dpos[M],int dneg[M],int a[N][N],int k){
  int j,x;
  static int F=0;
  if(i==N&&F!=1){
    F=1;
    printBoard(a);
    return;
  }
  for(j=0;j<N;j++){
    if(a[i][j]!=QUEEN){
      if(row[i]==NOT_FREE || col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE)
	continue;
      a[i][j]=j;
      row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    
      putQueen(i+1,col,row,dpos,dneg,a,k);
      a[i][j]=row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
    }else putQueen(i+1,col,row,dpos,dneg,a,k);
  }
}

int main(){
  int i,j,k,r,c,col[N],row[N],dpos[M],dneg[M],a[N][N];
  for(i=0;i<N;i++){
    col[i]=row[i]=dpos[i]=dneg[i]=FREE;
    for(j=0;j<N;j++)
      a[i][j]=FREE;
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    a[r][c]=QUEEN;
    row[r]=col[c]=dpos[r+c]=dneg[r-c+N-1]=NOT_FREE;
  }

  putQueen(0,col,row,dpos,dneg,a,k);
  return 0;
}

