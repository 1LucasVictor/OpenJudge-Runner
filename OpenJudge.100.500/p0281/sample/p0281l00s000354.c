#include <stdio.h>
#define N 100
#define MAX 1000000
int main(){
  int n, u, k, v, c, a[N][N], b[N], d[N], p[N];
  int i, j, min, min2;

  for (i = 0; i < N; i++) {
    d[i] = MAX-1;
  
    for (j = 0; j < N; j++) {
      a[i][j] = MAX-1;
    }
  }

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d", &u, &k);
    for (j = 0; j < k; j++) {
      scanf("%d %d", &v, &c);
      a[u][v] = c;
    }
  }

  d[0] = 0;

  for (j = 0; j < n; j++){
    min = MAX;
    for (i = 0; i < n; i++) {
      if (min > d[i] && b[i] != 1) {
        min = d[i];
        min2 = i;
      }
    }

    b[min2] = 1;
    for (i = 0; i < n; i++) {
      if (d[min2]+a[min2][i]<d[i] && b[i]!=1){
        d[i] = d[min2] + a[min2][i];
        p[min2] = i;
      }
    }
  }

  for (i = 0; i < n; i++) {
    printf("%d %d\n", i, d[i]);
  }

  return 0;
}


