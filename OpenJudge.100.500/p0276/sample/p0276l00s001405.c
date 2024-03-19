#include<stdio.h>
int main(){

  int G[100][100],n,i,j,s,u,k;




  scanf("%d",&n);

  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      G[i][j] = 0;

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    if(k!=0)for(j=0;j<k;j++){
	scanf("%d",&s);
	G[u-1][s-1] = 1;
      }
  }

  for(i=0;i<n;i++)
    for(j=0;j<n;j++){
      if(j!=n-1)printf("%d ",G[i][j]);
      else printf("%d\n",G[i][j]);
    }
  return 0;
}