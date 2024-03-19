#include<stdio.h>


int main(void){

  int n,m,i,j,an;

  scanf(" %d %d",&n,&m);

  int a[n][m];
  int b[m];

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }

  for(j=0;j<m;j++){
    scanf("%d",&b[j]);
  }

  printf("\n");

  for(i=0;i<n;i++){
    an=0;
    for(j=0;j<m;j++){
      an+=a[i][j]*b[j];
    }
    printf("%d\n",an);
  }


  return 0;
}