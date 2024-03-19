#include<stdio.h>
#include<stdbool.h>
#define N 8
#define NOTF -1
#define FREE 1

int A[N][N];
int x,row[N],col[N],dpos[2*N-1],dneg[2*N-1];

void printboard(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i][j]){
	if(row[i]!=j) return;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if (row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQueen(int i){
  int j;
  if(i==N){
    printboard();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==NOTF || dpos[i+j]==NOTF || dneg[i-j+N-1] == NOTF) continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOTF;
    putQueen(i+1);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

int main(){
  
  int i,j,t,w;
  
  scanf("%d",&x);

  for(i=0;i<2*N-1;i++) dpos[i]=dneg[i]=FREE;

  for(i=0;i<N;i++) col[i]=row[i]=FREE;
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      A[i][j]==false;
    }
  }

  for(i=0;i<x;i++){
    scanf("%d%d",&t,&w);
      A[t][w]=true;
  }
  putQueen(0);
  
  return 0;

}