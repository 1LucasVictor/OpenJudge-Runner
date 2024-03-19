#include <stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE 1
#define true 1
#define false 0

void putQueen(int);
void printBoard();
void initialize();

int k,M[N][N];
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];

int main(){
  int i,j,a,b;
  
  scanf("%d",&k);
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      M[i][j]=false;
    }
  }

  for(i=0;i<k;i++){
    scanf("%d%d",&a,&b);
    M[a][b]=true;
  }
  putQueen(0);
 
  return 0;
}


void putQueen(int i){
  int j;
  
  if(i == N){
    printBoard();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j] == NOT_FREE ||
       dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE)
      continue;
  
    // put a queen at (i, j)
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    // try the next row
    putQueen(i+1);
    // remove the queen at (i, j) for backtracking
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

void printBoard(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(M[i][j]){
	if(row[i]!=j) return;
      }
    }
  }
  //printf("test\n");
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
     printf((row[i] == j)? "Q": ".");
      
    }
    printf("\n");
  }
}

void initialize(){
  int i,j;
  for(i=0;i<k;i++){
    row[i]=FREE;
    col[i]=FREE;
  }

  for(j=0;j<k;j++){
    dpos[j]=FREE;
    dneg[j]=FREE;
  }
}
      
      

