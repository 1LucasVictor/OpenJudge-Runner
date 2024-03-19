#include<stdio.h>
#define N 101

int main(){
  int i, j, k, n, A[N][N];

  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d%d", &A[i][0], &A[i][1]);
    for(j=0; j<A[i][1]; j++){
      scanf("%d", &A[i][j+2]);
    }
  }

  for(i=0; i<n; i++){
    k=2;
    for(j=0; j<n; j++){
      if(A[i][k] == j+1){
	printf("1");
	k++;
      }
      else printf("0");
      if(j == n-1)printf("\n");
      else printf(" ");
    }
  }

  return 0;
}

