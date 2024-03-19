#include <stdio.h>

int main(void){

  int n, m, l, i, ii, iii;
  int c = 0;
  int a[100][100] = {{0},{0}};
  int b[100][100] = {{0},{0}};

  scanf("%d%d%d", &n, &m, &l);

  for(i = 0; i < n; i++){
    for(ii = 0; ii < m; ii++){
      scanf("%d", &a[i][ii]);
    }
  }

  for(i = 0; i < m; i++){
    for(ii = 0; ii < l; ii++){
      scanf("%d", &b[i][ii]);
    }
  }

  for(i = 0; i < n; i++){
    if(i != 0) printf("\n");
    for(ii = 0; ii < l; ii++){
      for(iii = 0; iii < m; iii++){
	c = a[i][iii] * b[iii][ii] + c;
      }
      printf("%d", c);
      if(ii != l-1) printf(" ");
      c = 0;
    }
  }
  printf("\n");
  return 0;
}