#include<stdio.h>
#include<stdbool.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int r[N],c[N],dp[2 * N - 1],dn[2 * N - 1];

bool X[N][N];

void initialize() {
  int i;
  
  for(i = 0;i < N;i++) {
    r[i] = FREE;
    c[i] = FREE;
  }
  for(i = 0;i < 2 * N - 1;i++) {
    dp[i] = FREE;
    dn[i] = FREE;
  }
}

void printBoard() {
  int i,j;
  
  for(i = 0;i < N;i++) {
    for(j = 0;j < N;j++) {
      if(X[i][j]) {
	if(r[i] != j) return;
      }
    }
  }
  for(i = 0;i < N;i++) {
      for(j = 0;j < N;j++) {
	if(r[i] == j) printf("Q");
	else printf(".");
      }
      printf("\n");
    }
}

void recursive(int i) {
  int j;
  
  if(i == N) {
    printBoard();
    return;
  }

  for(j = 0;j < N;j++) {
    if(NOT_FREE == c[j] ||
       NOT_FREE == dp[i + j] ||
       NOT_FREE == dn[i - j + N - 1]) continue;

    r[i] = j;
    c[j] = dp[i + j] = dn[i - j + N - 1] = NOT_FREE;

    recursive(i + 1);

    r[i] = c[j] = dp[i + j] = dn[i - j + N - 1] = FREE;
  }
}

int main() {
  int i,j,k,r,c;

  initialize();

  for(i = 0;i < N;i++){
    for(j = 0;j < N;j++) {
      X[i][j] = false;
    }
  }
  
  scanf("%d",&k);

  for(i = 0;i < k;i++) {
    scanf("%d%d",&r,&c);
    X[r][c] = true;
  }

  recursive(0);

  return 0;
}


  

