#include <stdio.h>
#define N 8

void printboard(void);
void putQueen(int);
 
int row[N]={0},col[N]={0},dpos[2*N-1]={0},dneg[2*N-1]={0};
int Q[N][N];
 
 
void printBoard(){
  int i,j;
  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
      if(Q[i][j] == 1)
	if(row[i] != j)return;
   
  for (i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j)printf("Q");
      else printf(".");
    }
    printf("\n");
  } 
} 
void putQueen (int i ){
  int j;
  if ( i == N){
    printBoard();
    return ;
  }
  for (j =0 ;j <N;j++){
    if (col[j] == 1 || dpos[i+j] == 1 || dneg[i-j+N-1] ==1)continue;    
    row[i] =j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = 1;
    putQueen(i+1);
    row[i] = col[j]=dpos[i+j]=dneg[i-j+N-1] = 0;
  }
}
int main(){
  int i,n,r,c;
   
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    Q[r][c] = 1;    
  }    
  putQueen( 0 );
    return 0;
}
 