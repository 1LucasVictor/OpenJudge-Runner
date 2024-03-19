#include<stdio.h>
#include<stdbool.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int a;
int row[N];
int col[N];
int dpos[2*N-1];
int dneg[2*N-1];
bool x[N][N];

void printboard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(x[i][j]){
	if(row[i]!=j) return;
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

void putqueen(int i){
  int j;
  if(i==N){
    printboard();
    return;
  }
  for(j=0;j<N;j++){
    if(NOT_FREE==col[j]||NOT_FREE==dpos[i+j]||NOT_FREE==dneg[i-j+N-1])
      continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    putqueen(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}


int main(){
  int i,j,k,r,c;
  for(i=0;i<N;i++)
    row[i]=col[i]=FREE;
  for(i=0;i<2*N-1;i++)
    dpos[i]=dneg[i]=FREE;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      x[i][j]=false;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    x[r][c]=true;
  }
  putqueen(0);

  return 0;
}

