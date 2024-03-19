#include<stdio.h>
int main(){
  long long  n,m,l,i,j,k,a[101][101],b[101][101],c[101][101];

  for(i = 0;i < 101;i++){
    for(j = 0;j < 101;j++){
      a[i][j] = 0;
      b[i][j] = 0;
      c[i][j] = 0;
    }
  }

  scanf("%lld %lld %lld",&n,&m,&l);

  for(i = 0;i < n;i++){
    for(j = 0;j < m;j++){
      scanf("%lld",&a[i][j]);
    }
  }
 for(i = 0;i < m;i++){
    for(j = 0;j < l;j++){
      scanf("%lld",&b[i][j]);
    }
  }

 for(i = 0;i < n;i++){
   for(j = 0;j < l;j++){
     for(k = 0;k < m;k++){
       c[i][j] = c[i][j] + a[i][k] * b[k][j];
     }
   }
 }

 for(i = 0;i < n;i++){
   for(j = 0;;j++){
     printf("%lld",c[i][j]);
     if(j >= l-1)break;
     printf(" ");
   }
   printf("\n");
 }

  return 0;
}