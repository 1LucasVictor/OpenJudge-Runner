#include<stdio.h>
#include<stdlib.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

void putQueen(int);

char A[N][N],k,X[N][N];
int row[N],col[N],dpos[2*N-1],dneg[2*N-1],con=0;;    

int main()
{
  int r,c,i,j;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      X[i][j] = '.';
      row[j] = FREE;
      col[j] = FREE;
    }
  }

  for(i = 0; i < 2*N-1; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }

  scanf("%d",&k);

  for(i = 0; i < k; i++){
    scanf("%d %d",&r,&c);
    A[r][c] = 'Q';
  }

  putQueen(0);

  return 0;
}

void putQueen(int i){
  int j,k;

  if(i == N){
    for(j = 0; j < N; j++){
      for(k = 0; k < N; k++){
	if(A[j][k] == 'Q'){
	  if(row[j] != k)return;
	}
      }
    }
    for(j = 0; j < N; j++){
      for(k = 0; k < N; k++){
	printf("%c",X[j][k]);
      }
      printf("\n");
    }
 
    return;
  }

    for(j = 0; j < N; j++){
      if(NOT_FREE == col[j] ||
	 NOT_FREE == dpos[i + j] ||
	 NOT_FREE == dneg[i - j + N - 1])continue;

      X[i][j]='Q';
      row[i] = j;
      col[j] = dpos[i + j] = dneg[i - j + N - 1] = NOT_FREE;
      
      putQueen(i + 1);

      row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
      X[i][j]='.';
    }
}

