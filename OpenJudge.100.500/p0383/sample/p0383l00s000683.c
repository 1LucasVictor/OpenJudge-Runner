#include<stdio.h>

int main(){
  int n, m, l;
  scanf("%d %d %d", &n, &m, &l);

  int a[n][m];
  int b[m][l];
  long c[n][l];

  for(int i = 0; i< n; i++){
    for(int j = 0; j < l; j++){
      c[i][j] = 0;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
	  scanf("%d", &a[i][j]);
    }
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < l; j++){
	  scanf("%d", &b[i][j]);
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < l; j++){
      for(int k = 0; k < m; k++){
		c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < l; j++){
	  printf("%ld", c[i][j]);
      if(j < l - 1){printf(" ");}
    }
    printf("\n");
  }

  return 0;
}
