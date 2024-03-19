#include<stdio.h>
#define N 1000
int main(){
  int i,j,k,n,a[N][N],m,b;
  scanf("%d",&n);
  for(k=0;k<n;k++){
    scanf("%d%d",&i,&m);
    for(j=0;j<m;j++){
      scanf("%d",&b);
      a[i-1][b-1]=1;
  }
}
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(a[i][j]!=1)a[i][j]=0;
      printf("%d",a[i][j]);
      if(j!=n-1)printf(" ");
    }
    printf("\n");
  }
  return 0;
}

