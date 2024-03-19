#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
int M[N][N];
void initialize(){
  int i;
  for(i=0;i<N;i++){
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
}

void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(M[i][j]){
	if(row[i] != j)return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){
	printf("Q");
      }
      else {
	printf(".");
      }
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;
  if(i==N){
    printBoard();
    return;
  }
  
  for(j=0;j<N;j++){
    if(NOT_FREE == col[j] || NOT_FREE == dpos[i+j] || NOT_FREE == dneg[i-j+N-1])continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    recursive(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }

}

int main(){
  int i,r,j,a,b;
  initialize();

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      M[i][j] = 0;
    }
  }
    scanf("%d",&r);
    for(i=0;i<r;i++){
      scanf("%d%d",&a,&b);
      M[a][b] = 1;
    }
    recursive(0);
    return 0;
  
}

  
    
    
    
    

