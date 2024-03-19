#include <stdio.h>
int main(){
  int a[100][100],b[100],n,m,sum,i,j;

  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++) for(j=0;j<m;j++) scanf("%d",&a[i][j]);

  for(i=0;i<m;i++) scanf("%d",&b[i]);
  for(i=0;i<n;i++){
    for(sum=0,j=0;j<m;j++) sum+=(a[i][j]*b[j]);
    printf("%d\n",sum);
  }

  return 0;
}