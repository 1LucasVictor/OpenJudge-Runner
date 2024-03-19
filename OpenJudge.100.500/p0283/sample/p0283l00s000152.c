#include <stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE -1

int Q[N][N],col[N],row[N],dpos[2*N-1],dneg[2*N-1];

void printBoard(void){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(Q[i][j]){
	if(row[i]!=j) return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j) printf("Q");
      else printf(".");
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
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE) continue;

    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    
    recursive(i+1);
    
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

int main(){
  int i,j,k,r,c;

  for(i=0;i<N;i++) row[i]=col[i]=FREE;
  for(i=0;i<2*N-1;i++) dpos[i]=dneg[i]=FREE;
  
  for(i=0;i<N;i++) for(j=0;j<N;j++) Q[i][j]=0;
  
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    Q[r][c]=1;
    }

  
  recursive(0);

  return 0;
}

