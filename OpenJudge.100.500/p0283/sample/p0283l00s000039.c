#include<stdio.h>
#define N 8

void printBoard(void);
int putQueen(int);

int A[N];
int row[N],col[N],dpos[2*N],dneg[2*N];

int main(){
  int i;
  int k,r,c;

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    A[r]=c;
    row[c]=1;
    col[r]=1;
    dpos[r+c]=1;
    dneg[r-c+N-1]=1;
  }
  putQueen(0); 
  return 0;
}
void printBoard(void){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}
int putQueen(int i){
  int j;
  if(i==N){
    printBoard();
    return 1;
  }
  if(col[i]){
    if(putQueen(i+1)){
      return 1;
    }
  }

  for(j=0;j<N;j++){
    if(row[j]==1 || col[i]==1 || dpos[i+j]==1 ||dneg[i-j+N-1]==1) continue;
    row[j]=1;
    dpos[i+j]=1;
    dneg[i-j+N-1]=1;
    A[i]=j;
    if(putQueen(i+1)) return 1;
    row[j]=0;
    dpos[i+j]=0;
    dneg[i-j+N-1]=0;
  }
  return 0;
}

