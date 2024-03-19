#include<stdio.h>
int main(){
  int i,j,n,a[101][101],b[100],c,k;
  for(i=0;i<=100;i++){
    for(j=0;j<=100;j++){
      a[i][j]=0;
    }
  }
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&b[i]);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&c);
      a[b[i]][c]=1;
  }
  }
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf(" %d",a[i][j]);
    }
    printf("\n");
    }
  return 0;
}