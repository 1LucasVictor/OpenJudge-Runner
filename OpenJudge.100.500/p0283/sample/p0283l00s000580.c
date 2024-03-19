#include<stdio.h>
#define N 8
#define FREE 0
#define NOT_FREE 1
int col[N],row[N],dpos[15],dneg[15],C[N][N];

void printBoard(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(C[i][j]==1){
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

}
      
  

void putQueen(int i){
  int j;
  
  if (i==N){
    printBoard();
    return;
  } 
  for(j=0;j<=N-1;j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE){     
      continue;
    }     
    // put a queen at (i, j)
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    // try the next row   
    putQueen(i+1);    
    // remove the queen at (i, j) for backtracking
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
    
  }
}
int main(){
  int i,j,k,r,c;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      C[i][j]=-1;
    } 
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    C[r][c]=1;
  }
  
  putQueen(0);

  return 0;
}