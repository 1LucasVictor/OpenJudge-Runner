#include<stdio.h>
#define N 1000
int main(){
 
  int Adj[N][N],n,i,j,s,u,k;
 
 
 
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      Adj[i][j] = 0;
 
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);

    if(k!=0)for(j=0;j<k;j++){
    scanf("%d",&s);
    Adj[u-1][s-1] = 1;
      }
  }
 
  for(i=0;i<n;i++)
    for(j=0;j<n;j++){
      if(j!=n-1)printf("%d ",Adj[i][j]);
      else printf("%d\n",Adj[i][j]);
    }

  return 0;
}