#include <stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
int X[N][N];

void initialize();
void recursive(int);
void PrintBord();

int main(){
  int i,j,k,r,c,n,R[N];
  initialize();
  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
      X[i][j]=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    X[r][c]=1;
  }
  recursive(0);
  return 0;
}

void recursive(int i){
  int j;
  if(i==N)
    {
      PrintBord();
      return;
    }
  for(j=0;j<N;j++){
    if(NOT_FREE==col[j]||NOT_FREE==dpos[i+j]||NOT_FREE==dneg[i-j+N-1])
      continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    recursive(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
  return;
}

void initialize(){
  int i;
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
  return;
}

void PrintBord(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]){
	if(row[i]!=j)
	  return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j)
	printf("Q");
      else
	printf(".");
    }
    printf("\n");
  }
  
  return;
}