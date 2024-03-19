#include <stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE 0
int A[N][N],row[N],col[N],dops[2*N-1],dneg[2*N-1];
void printBoard(void){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i][j]==1){
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
void putQueen(i){
  int j;
  if(i==N){
    printBoard();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE||dops[i+j]==NOT_FREE||dneg[i-j+N-1]==NOT_FREE)continue;
    row[i]=j;
    col[j]=NOT_FREE;
    dops[i+j]=NOT_FREE;
    dneg[i-j+N-1]=NOT_FREE;
    putQueen(i+1);
    row[i]=FREE;
    col[j]=FREE;
    dops[i+j]=FREE;
    dneg[i-j+N-1]=FREE;
  }
}
/*void printBoard(void){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j)printf("Q");
      printf(".");
    }
    printf("\n");
  }



  }*/
int main(){
  int i,j,k,r,c;
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
    for(j=0;j<N;j++){
      A[i][j]=0;

    }

  }
  for(i=0;i<2*N-1;i++){
    dops[i]=FREE;
    dneg[i]=FREE;
  }

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    A[r][c]=1;
  }
  putQueen(0);

  return 0;
}

