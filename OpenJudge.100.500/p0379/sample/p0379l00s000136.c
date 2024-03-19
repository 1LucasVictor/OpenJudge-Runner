#include<stdio.h>

int main(){
  int A[100][100],b[100], c[100], s, t, n, m;
  
  scanf("%d %d", &n, &m);
  for(s=0;s<n;s++){
    for(t=0;t<m;t++){
      scanf("%d", &A[s][t]);
    }
  }
  
  for(s=0;s<m;s++){
    scanf("%d", &b[s]);
  }
  
  for(s=0;s<n;s++){
    for(t=0;t<m;t++){
      c[s] += A[s][t]*b[t];
    }
  }
  
  printf("\n");
  
  for(s=0;s<n;s++){
    printf("%d\n", c[s]);
  }
  
  return 0;
}