#include<stdio.h>

#define N 100
#define INF 1000000

int x,A[N],B[N][N],C[N][N],D[N];

void funk(int,int);

int main() {
  int i,j,k;

  scanf("%d",&x);

  for(i = 0; i < x; i++) {
    scanf("%d",&k);
    scanf("%d",&A[k]);
    for(j = 0; j < A[k]; j++) {
      scanf("%d",&B[k][j]);
      scanf("%d",&C[k][j]);
    }
  }

  for(i = 0; i < x; i++) {
    D[i] = INF;
  }

  funk(0,0);

  for(i = 0; i < x; i++) {
    printf("%d %d\n",i,D[i]);
  }

  return 0;
}

void funk(int x,int y) {
  int i;
  D[x] = y;
  for(i = 0; i < A[x]; i++) {
    if(D[B[x][i]] > y + C[x][i]) {
      funk(B[x][i],y + C[x][i]);
    }
  }
}

