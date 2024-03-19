#include <stdio.h>
#include <limits.h>

int main(){

  int n;
  int G[105][105],d[105],pi[105],iro[105];
  int i,j,x,mincost,sum=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    d[i]=INT_MAX;
    pi[i]=0;
    iro[i]=0;
    for(j=0;j<n;j++)scanf("%d",&G[i][j]);
  }

  d[0]=0;

  while(1){
    mincost=INT_MAX;
    for(i=0;i<n;i++){
      if(iro[i]!=1&&d[i]<mincost){
	mincost=d[i];
	x=i;
      }
    }
    if(mincost==INT_MAX)break;
    iro[x]=1;
    for(i=0;i<n;i++){
      if(G[x][i]!=-1&&iro[i]!=1&&G[x][i]<d[i]){
	pi[i]=x;
	d[i]=G[x][i];
      }
    }
  }

  for(i=0;i<n;i++)sum+=d[i];
  printf("%d\n",sum);
  
  return 0;
}

