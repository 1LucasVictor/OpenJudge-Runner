#include<stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE -2

int row[N];
int col [N];
int dpos[N+N];
int dneg[N+N];
int k[N];

void printBoard(){
  int i,j,k;
  for(i=0;i<N;i++){
    for(k=0;k<N;k++){
      if(row[i]==k)printf("Q");
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

  if(k[i]==NOT_FREE){
    if( putQueen(i+1)) return 1;
    return 0;
  }

  
  for(j=0;j<N;j++){
    if((col[j] == NOT_FREE )||( dpos[i+j]==NOT_FREE )||( dneg[i-j+N-1]==NOT_FREE)) continue;
    //put a queen at (i,j)行と列
    row[i]=j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    //try the next row
    putQueen(i+1);
    //remove the queen at (i,j) for backtracking
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
  return 0;
}




int main(){
  int i,j,n,x,y;

  for(i=0;i<2*N;i++){
    if(i<N)
      row[i] = col[i] = FREE;
    dpos[i] = dneg[i] =  FREE;
  }
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&x,&y);
    k[x] = NOT_FREE;
    row[x]=y;
    col[y] = NOT_FREE;
    dpos[x+y] =NOT_FREE;
    dneg[x-y+N-1] =NOT_FREE;

  }
  putQueen(0);

  return 0;
}

