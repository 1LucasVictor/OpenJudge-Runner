#include<stdio.h>

#define N 8
#define L -1
#define O 1


int A[N], B[N], C[2*N-1], D[2*N-1];

int E[N][N];

void initialize();

void b();
void Qeen(int );

int main(){
  int i, j, a, b, c;
  
  initialize();

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      E[i][j] = -1;
    }
  }

  scanf("%d", &a);
  for(i = 0; i < a; i++){
    scanf("%d%d", &b, &c);
    E[b][c] = 1;
  }
  Qeen(0);

  return 0;
}

void initialize(){
  int i;
  for(i = 0; i < N; i++){
    A[i] = O;
    B[i] = O;
  }
  for(i = 0; i < 2*N-1; i++){
    C[i] = O;
    D[i] = O;
  }
}

void b(){
  int i, j;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(E[i][j]==1){
        if(A[i] != j) return;
      }
    }
  }

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(A[i] == j)
      printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void Qeen(int i){
  int j;
  if(i == N){
    b();
    return;
  }

  for(j = 0; j < N; j++){
    if(B[j] == L || C[i+j] == L || D[i-j+(N-1)] == L) continue;
    A[i] = j;
    B[j] = L;
    C[i+j] = L;
    D[i-j+(N-1)] = L;

    Qeen(i+1);
    A[i] = O;
    B[j] = O;
    C[i+j] = O;
    D[i-j+(N-1)] = O;
  }
}


