// 行列計算　掛け算

#include <stdio.h>
#define N 101

int main(void){
  int n, m, l;
  int i, j, k;
  int a[N][N], b[N][N];
  long long c[N][N] = {0};

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
    printf("%lld", c[i][0]);
    for(j=1; j<l; j++){
      printf(" %lld", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}

