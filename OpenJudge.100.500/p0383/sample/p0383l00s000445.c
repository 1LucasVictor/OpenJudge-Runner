#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

  int n, m, l;
  int i, j, k;

  scanf("%d %d %d", &n, &m, &l);

  int a[n][m], b[m][l];
  int c[n][l];

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(j = 0; j < m; j++){
    for(k = 0; k < l; k++){
      scanf("%d", &b[j][k]);
    }
  }

  for(i = 0; i < n; i++){
    for(k = 0; k < l; k++){
      c[i][k] = 0;
      for(j = 0; j < m; j++){
	c[i][k] += a[i][j] * b[j][k];
      }
    }
  }

  for(i = 0; i < n; i++){
    for(k = 0; k < l - 1; k++){
      printf("%d ", c[i][k]);
    }
    printf("%d\n", c[i][l - 1]);
  }

  return 0;
}
