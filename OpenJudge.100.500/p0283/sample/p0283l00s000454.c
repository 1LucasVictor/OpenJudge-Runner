#include<stdio.h>

#define N 8
#define NOT_FREE -1
#define FREE 1
#define NOT_IN -2
#define IN 2

int k;
int board[N][N], input[N][N];
int row[N], col[N], dpos[2 * N - 1], dneg[2 * N - 1];

void initialization(){

  int i, j;

  for(i = 0; i < N; i++){
    row[i] = FREE;
    col[i] = FREE;

    for(j=0;j<N;j++){
      input[i][j] = NOT_IN;
      board[i][j] = NOT_IN;
    }
  }
  for(i = 0; i < 2 * N - 1; i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

int print(){

  int i, j;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(board[i][j] == NOT_IN)
        printf(".");
      else printf("Q");
    }
    printf("\n");
  }

  return 0;
}

void Queenarrange(int i){

  int j, m = 0;

  if(i == N){

    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
        if(board[i][j] == IN && input[i][j] == IN)
          m++;
      }
    }

    if(m == k)
      print();
  }

  for(j = 0; j < N; j++){
    if(row[i] == FREE && col[j] == FREE && dpos[i+j] == FREE && dneg[i - j + N - 1] == FREE){

      board[i][j] = IN;
      row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] =  NOT_FREE;

      i++;
      Queenarrange(i);

      i--;
      board[i][j] = NOT_IN;
      row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
    }
  }
  return;
}

int main(){
  int r, c;
  int i, j;

  initialization();

  scanf("%d", &k);
  for(i = 0; i < k; i++){
    scanf("%d %d", &r, &c);
    input[r][c] = IN;
  }

  Queenarrange(0);

  return 0;
}
