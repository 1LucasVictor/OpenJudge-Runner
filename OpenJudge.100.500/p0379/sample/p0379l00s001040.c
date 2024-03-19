#include <stdio.h>
 
int main(void){
  int amat[128][128],bmat[128],cmat[128];
  int n,m,i,j;
 
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++)  scanf("%d",&amat[i][j]);
  }
  for(i=0;i<m;i++)  scanf("%d",&bmat[i]);
 
  for(i=0;i<n;i++){
    for(j=0;j<m;j++)  cmat[i]+=amat[i][j]*bmat[j];
  }
 
  for(i=0;i<n;i++)  printf("%d\n",cmat[i]);
 
  return 0;
}