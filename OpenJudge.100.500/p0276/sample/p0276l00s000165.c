#include<stdio.h>
int main(){
  int n,m,i,j,x,y,a[100][100]={0};
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&x,&m);
    for(j=0;j<m;j++){
      scanf("%d",&y);
      a[x-1][y-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",a[i][j]);
      if(j!=n-1)printf(" ");
    }
    printf("\n");
  }
  return 0;
}