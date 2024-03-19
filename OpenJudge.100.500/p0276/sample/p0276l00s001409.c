#include <stdio.h>
 
int main(){
  int i, j, n, k, v, u, A[100][100];
  scanf("%d", &n);

  for(i = 0; i < n; i++){
   scanf("%d %d",&u ,&k);
   for(j = 0; j < k; j++){
     scanf("%d", &v);
     A[u-1][v-1] = 1;
   }
  }
 
  for(i = 0; i < n; i++){
   for(j = 0; j < n-1; j++){
    printf("%d",A[i][j]);
    }
   printf("%d",A[i][j]);
  }
  return 0;
}