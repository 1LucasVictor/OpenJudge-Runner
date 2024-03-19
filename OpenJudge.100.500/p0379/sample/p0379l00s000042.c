#include<stdio.h>
#define col 100
#define row 100

int main(void) {
  int i,j,n,m;
  int mat[row][col],vec[row];
  int ans[row]={0};
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&mat[i][j]);
  for(j=0;j<n;j++)
    scanf("%d",&vec[j]);
  printf("\n");
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      ans[i]+=mat[i][j]*vec[j];
  for(i=0;i<n;i++)
    printf("%d\n",ans[i]);
  return(0);
}