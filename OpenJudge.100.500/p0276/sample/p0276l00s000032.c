#include <stdio.h>

int main(void){
  int  column[110][110] = {0}, n, k, o, i, j, v;

  scanf("%d", &o);
  for (i = 1; i <= o; i++) {
    scanf("%d", &n);
    scanf("%d", &k);
    for (j = 1; j <= k; j++) {
      scanf("%d", &v);
      column[n][v] = 1;
    }
  }

  for (i = 1; i <= o; i++) {
    for (j = 1; j <= o; j++) {
      printf("%d", column[i][j]);
      if (j < o) {
        printf(" ");
      }
      else {
        printf("\n");
      }
    }
  }

  return 0;
}

