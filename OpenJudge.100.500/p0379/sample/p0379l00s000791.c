#include <stdio.h>
int main(){

  int n,m,a[100][100],b[100],c[100],add[100][100],sum[100]={0},i,j;

  scanf("%d %d",&n,&m);

  for(i = 0; i < n; i++){

    for(j = 0; j < m; j++){

      scanf("%d",&a[i][j]);

    }

  }

  for(i = 0; i < m; i++){

    scanf("%d",&b[i]);

  }
    
  for(i = 0; i < n; i++){

    for(j = 0; j < m; j++){
      
      add[i][j]=a[i][j]*b[j];
  
    }

  }
  
  for(i = 0; i < n; i++){

    for(j = 0; j < m; j++){
      
      sum[i]=sum[i]+add[i][j];
  
    }

  }

  for(i = 0; i < n; i++){
    
    printf("%d\n",sum[i]);

      }

  return 0;

}