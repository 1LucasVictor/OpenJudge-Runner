#include<stdio.h>
int main() {
  int n, i, j, m, h;
  scanf("%d", &n);
  int u[n], k[n], A[n][n];
  for(i = 0; i < n; i++) {
    scanf("%d%d", &u[i], &k[i]);
    for(j = 0; j < k[i]; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      for(m = 0; m < n; m++) {
	h = 0;
	if(j == (A[i][m]-1)) {
	  h = 1;
	  break;
	}
      }
      if(h == 1) printf("1");
      else printf("0");
      if(j != n-1) printf(" ");
    }
    if(i != n-1) {
      printf("\n");
    }
  }
  return 0;
}