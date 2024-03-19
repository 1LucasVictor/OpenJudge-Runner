#include<stdio.h>

int main(void){
  int n, m, a[100][100], b[100];

  scanf("%d %d", &n, &m);

  int i, j;
  for(i=1;i<n+1;i++){
    for(j=1;j<m+1;j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(j=1;j<m+1;j++){
    scanf("%d", &b[j]);
  }

  int c[100];

  for(i=1;i<n+1;i++){
    c[i] = 0;
  }
    
  for(i=1;i<n+1;i++){
    for(j=1;j<m+1;j++){
      c[i] +=  a[i][j] * b[j];
    }
  }

  for(i=1;i<n+1;i++){
     printf("%d\n", c[i]);
  }

  return 0;
}
