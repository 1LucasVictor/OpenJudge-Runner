#include<stdio.h>
int main(){
 
  int i,j,a[101][101],b[1001],n,m;
  int sum;
  scanf("%d%d",&n,&m);
 
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
 
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<m;i++){
    scanf("%d",&b[i]);
  }
 
  for(i=0;i<n;i++){
    sum=0;
    for(j=0;j<m;j++){
      sum+= a[i][j]*b[j];
    }
    printf("%d\n",sum);
  }
 
  return 0;
}
