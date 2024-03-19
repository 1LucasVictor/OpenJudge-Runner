#include<stdio.h>
#define M 100
int main(){
  int d=0,n,m,l,i,j,k;
long long int a[M][M],b[M][M],c[M][M];

  scanf("%d %d %d",&n,&m,&l);
  /*  printf("input 1\n");*/
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  /*printf("input 2\n");*/

  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      scanf("%d",&b[i][j]);
    }
  }
  /*printf("cal\n");*/

  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){

        d+=a[i][k]*b[k][j];
      }
      c[i][j]=d;
      d=0;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      printf("%d",c[i][j]);

      if(j!=l-1)printf(" ");
      }
      printf("\n");
  }

  return 0;
}