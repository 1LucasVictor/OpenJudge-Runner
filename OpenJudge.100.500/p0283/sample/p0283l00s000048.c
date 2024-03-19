#include<stdio.h>
#define N 8
#define FREE -1
#define NOFREE 1
 
int dpos[2 * N - 1],dneg[2 * N - 1];
int row[N], col[N], x[N][N];

void initialize(void);
void print_board(void);
void recursive(int);
 
int main(){
  int i,j;
	int r,c;
	int k;
   
  initialize();
 
  for( i = 0 ; i < N ; i++ ){
    for(j = 0 ; j < N ; j++ ){
      x[i][j] = 0;
    }
  }
  
  scanf("%d",&k);
 
  for( i = 0 ; i < k ; i++ ){
    scanf("%d%d",&r,&c);
    x[r][c] = 1;
  }
 
  recursive(0);
 
  return 0;
}
 
void initialize(){
  int i,j;
	
  for( i = 0 ; i < N ; i++ ) {
    row[i] = FREE;
    col[i] = FREE;
  }
 
  for( i = 0 ; i < 2 * N - 1 ; i++ ){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}
 
 
void print_board(){
  int i,j;
   
  for( i = 0 ; i < N ; i++ ){
    for( j = 0 ; j < N ; j++ ){
      if(x[i][j]){
    if(row[i] != j) return;
      }
    }
  }
 
  for( i = 0 ; i < N ; i++ ){
    for( j = 0 ; j < N ; j++ ){
      if(row[i] == j ) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}
 
void recursive(int i){
	  int j;
	
  if( i == N ){
    print_board();
    return;
  }
 
  for( j = 0 ; j < N ; j++ ){
    if( NOFREE == col[j] || NOFREE == dpos[i + j] || NOFREE == dneg[i - j + N - 1]) continue;
 
    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = NOFREE;
 
    recursive(i + 1);
 
    row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
  }
}