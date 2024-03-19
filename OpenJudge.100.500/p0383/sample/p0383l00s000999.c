#include<stdio.h>

int main(){
  int i,k,j,n,m,l;
  int a[110][110],b[110][110];
  long c[110][110] = {};

  scanf("%d %d %d", &n, &m, &l);

  for(i=0;i<n;++i){
    for(k=0;k<m;++k){
      scanf("%d", &a[i][k]);
    }
  }

  for(i=0;i<m;++i){
    for(k=0;k<l;++k){
      scanf("%d", &b[i][k]);
    }
  }

  
  for(i=0;i<n;++i){
    for(k=0;k<l;++k){
      for(j=0;j<m;++j){
	c[i][k] += a[i][j]*b[j][k];
      }

      printf("%d", c[i][k]);
      if(k != l-1) printf(" ");
    }
    printf("\n");
  }
  
  return 0;
}

