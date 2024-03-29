// 行列計算　掛け算

#include <stdio.h>
#define N 200

int main(void){
  int n, m, l;
  int i, j, k;
  int a[N][N], b[N][N], c[N][N];

  scanf("%d %d %d", &n, &m, &l);

  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(i=0; i<m; i++){
    for(j=0; j<l; j++){
      scanf("%d", &b[i][j]);
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<l; j++){
      for(k=0; k<m; k++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<l; j++){
      printf("%d", c[i][j]);
      if(j!=l-1)
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}

