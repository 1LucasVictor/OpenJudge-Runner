#include <stdio.h>
int main(){
  int i, j;
  int n, u, k, v;
  int A[101][101];
  scanf("%d", &n);
  for( i = 0 ; i < n ; i++ ){
    scanf("%d", &u);
    scanf("%d", &k);
    for( j = 0 ; j < k ; j++ ){
      scanf("%d", &v);
      A[u-1][v-1]=1;
    }
  }
  for( i = 0 ; i < n ; i++ ){
    for( j = 0 ; j < n ; j++){
      printf("%d",A[i][j]);
      if( j < n - 1 ){
	printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}