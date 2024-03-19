#include<stdio.h>
#define N 8
#define FREE 0
#define NOT_FREE 1

void putQueen(int );
void printBoard(void);

int row[N],col[N],dpos[N*2-1],dneg[N*2-1];
int Q[N][N];

int main(){
  int i,j,k,r,c;
  
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
    
  }
  for(i=0;i<N*2-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      Q[i][j]=FREE;
    }
  }
  
  scanf("%d",&k);
  
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    Q[r][c]=NOT_FREE;
  }
  putQueen(0);

  return 0;
  
}

void putQueen(int i){
  int j;
  
  if(i==N){
    printBoard();
    return ;
  }

  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1] == NOT_FREE){
      continue;
    }
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    
    putQueen(i+1);

    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}
    
      
void printBoard(void){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(Q[i][j]==NOT_FREE && row[i]!=j) return;
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