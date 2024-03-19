#include <stdio.h>

long long c[100][100];

int main(){
  int n, m, l;
  scanf("%d%d%d", &n, &m, &l);

  int a[100][100];
  int b[100][100];

  int i,j,k;
  for(i = 0;i < n;i++){
    for(j = 0;j < m;j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(i = 0;i < m;i++){
    for(j = 0;j < l;j++){
      scanf("%d", &b[i][j]);
    }
  }

  for (i = 0;i < n;i++){
    for(j = 0;j < l; j++){
      for(k = 0;k < m;k++){
	c[i][j] += a[i][k]*b[k][j];
      }
      printf("%lld", c[i][j]);
      if(l - j != 1)
	printf(" ");
    }
    printf("\n");
  }
  
  return 0;
}

