#include<stdio.h>
#define N 8
void putq(int i,int row[],int col[],int dpos[],int dneg[]);
void printQ(int row[]);
char A[N][N];
int memo[N]={10};
int main()
{
  int k,i,j,r,c;
  int col[N]={10},dpos[15]={10},dneg[15]={10},row[N]={10};
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d",&r);
    scanf("%d",&c);
    row[r]=c;
    memo[r]=r;
    col[c]=dpos[r+c]=dneg[r-c+N-1]=-1;
    }
  putq(0,row,col,dpos,dneg);
  return 0;
}
void putq(int i,int row[],int col[],int dpos[],int dneg[])
{
  int j=-1;
  if(i==N){
    printQ(row);
  return ;
  }
  if(memo[i]==i)putq(i+1,row,col,dpos,dneg);
  for(j=0;j<N;j++){
    if(memo[i]==i)break;
    if(col[j]==-1 || dpos[i+j]==-1 || dneg[i-j+N-1]==-1)continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=-1;
    putq(i+1,row,col,dpos,dneg);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=1;
  }
}
void printQ(int row[])
{
  int i,j,k;
  for(i=0;i<N;i++)A[i][row[i]]='Q';
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i][j]=='Q')printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}
