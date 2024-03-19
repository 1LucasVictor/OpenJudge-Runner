#include<stdio.h>

#define N 8
#define FREE -1
#define Not_FREE 1

int row[N], col[N], dpos[2 * N -1], dneg[2 * N - 1];
int x[N][N];

void initialize(){
  int i, j;
  
  for(i = 0 ; i < N ; i++){
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i = 0 ; i < 2 * N -1 ; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

void printBoard(){
  int i, j;
  
  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      if(x[i][j]){
	if(row[i] != j) return;
      }
    }
  }

  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;
  
  if(i == N){
    printBoard();
    return;
  }
  for(j = 0 ; j < N ; j++){
    if(Not_FREE == col[j] || Not_FREE == dpos[i + j] || Not_FREE == dneg[i - j + N - 1]) continue;
    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = Not_FREE;

    recursive(i + 1);
    row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
  }
}


int main(){
  initialize();

  int i, j, k, l, m;

  for(i = 0 ; i < N ; i++)
    for(j = 0 ; j < N ; j++) x[i][j] = 0;

  scanf("%d", &k);
  for(i = 0 ; i < k ; i++){
    scanf("%d %d", &l, &m);
    x[l][m] = 1;
  }
  recursive(0);

  return 0;
}
