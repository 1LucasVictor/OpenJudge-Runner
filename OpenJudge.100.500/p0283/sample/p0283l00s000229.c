#include <stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE 1
#define TRUE 3
#define FALSE 2
void initialize(void);
void printboard(void);
void recursive(int);

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
int Q[N][N];


void initialize(){
  for ( int i = 0; i < N; i++ ){
    row[i] = FREE, col[i] = FREE;
  }
    for ( int i = 0; i < 2*N - 1; i++ ) {
      dpos[i] = FREE; dneg[i] = FREE;
    }
}
  




void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(Q[i][j] == TRUE){
    if(row[i] != j)return;
      }
    }
  }
  for (i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("%s",(row[i] == j)?"Q":".");
    }
    printf("\n");
  }
   printf("\n");
}

void recursive (int i ){
  int j;
  if ( i == N){

    printBoard();
    return ;
  }
  for (j =0 ;j <N;j++){
    if (col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] ==NOT_FREE)continue;

    row[i] =j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
    recursive(i+1);
    row[i] = col[j]=dpos[i+j]=dneg[i-j+N-1] = FREE;
  }
}

  
int main(){
  int i,j,k,r,c;
  
   initialize();
   
  for (i = 0; i< N;i++)
    for (j = 0; j< N;j++)
      Q[i][j] = FALSE;

      scanf("%d",&k);
      for(i=0;i<k;i++){
	scanf("%d %d",&r,&c);
	Q[r][c] = TRUE;
   
  }
   
   
    recursive( 0 );
    return 0;
}