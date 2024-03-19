#include <stdio.h>

int main(){

  int vec[100][100];
  int sub[100];
  int ans[100]={0};
  int n,m,i,j,k,num,sum;

  scanf("%d %d",&n,&m);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&vec[i][j]);
    }
  }
  for(j=0;j<m;j++){
    scanf("%d",&sub[j]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      ans[i]+=vec[i][j]*sub[j];
    }
    printf("%d\n",ans[i]);
  }
  return 0;
}
