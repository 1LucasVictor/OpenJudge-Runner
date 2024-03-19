#include<stdio.h>
#define MAX 100
void Graph(int **);

int N;
int i,j;

int main(){
  int A[MAX][MAX];
  int *B[MAX];

  scanf("%d",&N);

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      A[i][j] = 0;
    }
  }

  for(i = 0; i < N; i++){
      B[i] = A[i];
  }

  Graph(B);

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(j != 0) printf(" ");
      printf("%d",A[i][j]);
    }
    printf("\n");
  }

  return 0;
}


void Graph(int **A){
  int u,k,v;

  for(i = 0; i < N; i++){
    scanf("%d%d",&u,&k);
    u--;
    for(j = 0; j< k; j++){
      scanf("%d",&v);
      v--;
      A[u][v] = 1;
    }
  }
}