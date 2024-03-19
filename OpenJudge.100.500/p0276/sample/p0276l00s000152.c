#include <stdio.h>
int main(){
  int n,i,j,c,r,tmp;
  scanf("%d",&n);
  int a[n][n];


for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    a[i][j]=0;
  }
 }
 for(j = 0;j<n;j++){
  scanf("%d %d",&c,&r);
  
  for(i = 0;i<r;i++){
    scanf("%d",&tmp);
    a[c-1][tmp-1] = 1;
  }

 }
for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    if(j == n-1) printf("%d\n",a[i][j]);
    else printf("%d ",a[i][j]);
  }
 }
  return 0;
}

