#include<stdio.h>

int main(void){
  int n, m, a[100][100], b[100];

  scanf("%d %d", &n, &m);

  int i, j;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d", &a[i][j]);
    }
  }

  for(j=0;j<m;j++){
    scanf("%d", &b[j]);
  }

  int c[100];

  for(i=0;i<n;i++){
    c[i] = 0;
  }
    
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      c[i] +=  a[i][j] * b[j];
    }
  }

  for(i=0;i<n;i++){
     printf("%d\n", c[i]);
  }

  return 0;
}

