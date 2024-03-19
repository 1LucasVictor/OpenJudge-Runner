#include<stdio.h>
#define N 100
#define MAX 2000
#define INFTY (1 << 21)
#define WHITE 0
#define GRAY 1
#define BLACK 2


int A[N][N], n;

int min();

int main(){
  int i, j, a;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &a);
      A[i][j]=a;
      if(A[i][j] ==-1)  A[i][j]=INFTY;
    }
  }

  printf("%d\n", min());

  return 0;
}

int min(){
  int i,j,b, min, sum = 0;
  int B[N], C[N], color[N];

  for(i = 0; i < n; i++){
    B[i] = INFTY;
    C[i] = -1;
    color[i] = WHITE;
  }

  B[0] = 0;

  while(1){
    min = INFTY;
    b = -1;
    for(i = 0; i < n; i++){
      if(min > B[i] && color[i] != BLACK){
        b = i;
        min = B[i];
      }
    }
    if(b == -1) break;
    color[b] = BLACK;
    for(j = 0; j < n; j++){
      if(color[j] != BLACK && A[b][j] != INFTY){
        if(B[j] > A[b][j]){
          B[j] = A[b][j];
          C[j] = b;
          color[j] = GRAY;
        }
      }
    }
  }

   for(i = 0; i < n; i++){
    if(C[i] != -1) sum += A[i][C[i]];
  }

  return sum;
}

