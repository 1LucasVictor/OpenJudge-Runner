#include<stdio.h>
#define MAX 200
 
int main(){
  int n, u, k, v, a[MAX][MAX], i, j;
   
  scanf("%d", &n);
   
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      a[i][j]=0;
    }
  }
   
  for(i = 1; i <= n; i++){
    scanf("%d%d", &u, &k);
 
    for(j = 1; j <= k; j++){
      scanf("%d", &v);
      a[i][v] = 1;
    }
  }
   
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      if (j == n) printf("%d", a[i][j]);
      else printf("%d ", a[i][j]);
    }
    printf("\n");

  }
   
  return 0;
}