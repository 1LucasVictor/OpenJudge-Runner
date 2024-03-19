#include <stdio.h>

#define N 8

int A[N][N],Row[N],Col[N],Dpos[2*N-1],Dneg[2*N-1];

void printBoard(){
  int i, j;

  for( i = 0 ; i < N ; i++ ){
    for( j = 0 ; j < N ; j++ ){
      if( A[i][j] == 1 ){
	if( Row[i] != j ){
        return;
    }
      }
    }
  }
  
  for( i = 0 ; i < N ; i++ ){
    for( j = 0 ; j < N ; j++ ){
      if( Row[i] == j ){
	printf("Q");
      }
      else printf(".");
    }
    printf("\n");
  }
}

int putQueen(int i){
  int j;
  
  if( i == N ){
    printBoard();
    return 0;
  }

  for( j = 0 ; j < N ; j++ ){
    if(Col[j] == 1 || Dpos[i+j] == 1 || Dneg[i-j+N-1] == 1){
      continue;
    }
    Row[i] = j;

    Col[j] = Dpos[i+j] = Dneg[i-j+N-1] = 1;

    putQueen(i+1);
    
    Col[j] = Dpos[i+j] = Dneg[i-j+N-1] = 0;
    
  }

}
  


int main(){
  int k, i, a, b;
  
  scanf("%d",&k);

  for(i = 0;i < k;i++){
    scanf("%d%d",&a,&b);
    A[a][b] = 1;
  }

  putQueen(0);

  return 0;
}


