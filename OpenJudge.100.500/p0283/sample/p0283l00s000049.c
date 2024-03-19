#include<stdio.h>
#define N 8
#define FREE -1
#define NFREE 1
#define FALSE 0
#define TRUE 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1],X[N][N];

void initialize(){
  int i;
  for( i = 0 ; i < N ; i++ ){
    row[i] = FREE;
    col[i] = FREE;
  }
  for( i = 0 ; i < 2*N-1 ; i++ ){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

void print_Board(){
  int i, j;
  for( i = 0 ; i < N ; i++ ){
    for( j = 0 ; j < N ; j++ ){
      if( X[i][j] ){
	if( row[i] != j ) return;
      }
    }
  }
  for( i = 0 ; i < N ; i++ ){
    for( j = 0 ; j < N ; j++ ){
      if( row[i] == j ) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;
  if( i == N ){
    print_Board();
    return;
  }
  for( j = 0 ; j < N ; j++ ){
    if( NFREE == col[j] || NFREE == dpos[i+j] || NFREE == dneg[i-j+N-1] ) continue;
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NFREE;
    recursive(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

int main(){
  int i, j, k, r, c;

  for( i = 0 ; i < N ; i++ ){
    for( j = 0 ; j < N ; j++ ) X[i][j] = FALSE;
  }

  scanf("%d",&k);
  
  for( i = 0 ; i < k ; i++ ){
    scanf("%d%d",&r,&c);
    X[r][c] = TRUE;
  }

  recursive(0);

  return 0;
}

