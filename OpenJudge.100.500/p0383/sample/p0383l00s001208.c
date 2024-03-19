#include<stdio.h>
int main(){
  int n,m,l,i,j,k;
  int a[101][101],b[101][101];
  long long ans[101][101]={};
  scanf("%d%d%d",&n,&m,&l);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(j=0;j<m;j++){
    for(i=0;i<l;i++){
      scanf("%d",&b[j][i]);
      
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
	ans[i][j]+=a[i][k]*b[k][j];
      }
      printf("%lld",ans[i][j]);
      if(j!=l-1){
	printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
      

