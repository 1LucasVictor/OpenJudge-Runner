#include <stdio.h>
int main(){
  int i, j, k, u, v, n, A[100][100], d[100], c=0;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++)
      A[i][j] = 0;
  }
  for(i = 0; i < n; i++){
    scanf("%d",&u);
    scanf("%d", &k);
    for(j = 0; j < k; j++){
      scanf("%d",&v);
      A[u-1][v-1] = 1;
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(d[j] != 0) continue;
      else if(A[i][j] == 1) d[j] = d[i]+1;
    }
  }

  for(i = 0; i < n; i++){
    printf("%d %d\n", i+1, d[i]);
    }
  return 0;
}