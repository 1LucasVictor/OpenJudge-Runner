#include <stdio.h>
#define N 8
int A[N][N]={-1};
int row[N]={-1}; //yoko
int col[N]={-1}; //tate
int dpos[15]={-1};//hidarinaname
int dneg[15]={-1}; //miginaname
void putQueen(int i);
void printBoard();     
int main(){
  int i,j,k,l;
  scanf("%d",&k);
  for(l=0;l<k;l++){
    scanf("%d%d",&i,&j);
    A[i][j]=1;
  }
   putQueen(0);
  return 0;
}

void putQueen(int i){
  int j;
  //printf(" %d",i);
  if (i == N){
    printBoard();
    return;
  }
  for (j=0;j<N;j++){
    if (col[j] ==1 ||dpos[i+j] == 1 || dneg[i-j+N-1] == 1) continue;
    // put a queen at (i, j)
      row[i] = j;
      col[j] = dpos[i+j] = dneg[i-j+N-1] = 1;
      // try the next row
      putQueen(i+1);
       row[i]=col[j] = dpos[i+j] = dneg[i-j+N-1] = -1;
  }
}
void printBoard(){
  int i,j;
  for(i = 0;i<N;i++) {
    for(j = 0;j<N;j++) {
      if(A[i][j]==1) {
        if(row[i] != j) return;
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