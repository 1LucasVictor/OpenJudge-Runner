#include <stdio.h>

#define N 8
#define NOT_FREE 1
#define FREE -1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1],buf[N][N];
int flag=0;
void putQueen(int);
void printBoard();

int main(){
  int a,b,i,n,j;
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i] = FREE;
  }
  for(i = 0;i<2*N;i++){
    dpos[i] = FREE;
    dneg[i] =FREE;
  }
  for(i = 0;i<N;i++){
    for(j = 0;j<N;j++){
      buf[i][j] =0;
    }
  }
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    buf[a][b]  = 1;
  }
  putQueen(0);
  return 0;
}


void putQueen(int i){
  int j,k;
  if(i ==N ){
    printBoard();
    return;
  }
  for(j = 0;j<=N-1;j++){
    if(col[j] == NOT_FREE || dpos[i+j] ==NOT_FREE || dneg[i-j+N-1] ==NOT_FREE){
      continue;
    }
    row[i] = j;
    col[j] = dpos[j+i] = dneg[i-j+N-1] = NOT_FREE;
    putQueen(i+1);
    col[j] = dpos[i+j] = dneg[i-j+N-1] =FREE;
  }   
}
void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j = 0;j<N;j++){
      if(buf[i][j]==1){
	if(row[i]!= j) return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j = 0;j<N;j++){
      if(row[i] ==j) printf("Q");
      else printf(".");
	
    }
    printf("\n");
  }
}

