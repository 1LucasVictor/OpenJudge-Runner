#include<stdio.h>

int main(){
  int m,n,i,j;
  int a[100][100];
  int b[100];
  int c[100] = {0};
  
  scanf("%d%d",&n,&m);
  
  for(i = 0;i < n;i++){
    for(j = 0;j < m;j++){
      scanf("%d",&a[i][j]);
      }
    printf("\n");
  }
  
  for(i = 0;i < m;i++){
    scanf("%d",&b[i]);
    printf("\n");
  }
  
  for(i = 0;i < n;i++){
    for(j = 0;j < m;j++){
      c[i] += a[i][j]*b[j];
  }
    printf("%d\n",c[i]);
  }

  return 0;
}