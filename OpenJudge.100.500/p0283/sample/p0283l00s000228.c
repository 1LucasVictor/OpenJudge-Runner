#include <stdio.h>
#include <stdlib.h>

#define N 8
#define ON 1
#define OFF 0
#define TRUE 1

int X[N], Y[N], sir[N][N], L[2*N-1], R[2*N-1];

void Output(){
  int i, j;

  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      if(sir[i][j] == TRUE){
        if(X[i] != j){
          return;
        }
      }
    }
  }

  for(i = 0 ; i < N ; i++) {
    for(j = 0 ; j < N ; j++) {
      if(X[i] == j){
        printf("Q");
      }
      else{
        printf(".");
      }
    }
    printf("\n");
  }
}

int Queen(int m){
  int n;

  if(m == N){
    Output();
    return 0;
  }

  for(n = 0 ; n < N ; n++){
    if(Y[n] == ON || L[m+n] == ON || R[m-n+N-1] == ON){
      continue;
    }

    X[m] = n;
    Y[n] = ON;
    L[m+n] = ON;
    R[m-n+N-1] = ON;

    Queen(m+1);

    X[m] = OFF;
    Y[n] = OFF;
    L[m+n] = OFF;
    R[m-n+N-1] = OFF;
  }

   return 0;
}



int main(){
  int i, j, k, r, c;

  for(i = 0 ; i < N ;  i++){
    X[i] = 0;
    Y[i] = 0;
  }

  for(i = 0 ; i < 2*N-1 ; i++){
    L[i] = 0;
    R[i] = 0;
  }

  for(i = 0 ; i < N ; i++){
    for(j = 0; j < N; j++){
      sir[i][j] = -1;
    }
  }

  scanf("%d", &k);
  for(i = 0 ; i < k ; i++){
    scanf("%d %d", &r, &c);
    sir[r][c] = TRUE;
  }
  Queen(0);

  return 0;
}

