#include<stdio.h>

int main()
{
  int i,j,n,count=0,v,c,c1,v1;
  int G[101][101],color[101],d[101],pi[101],mincost,ii;
  for(i=0;i<101;i++){
    for(j=0;j<101;j++)G[i][j]=-1;
  }
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&v,&c);
    for(j=0;j<c;j++){
      scanf("%d%d",&v1,&c1);
      G[v][v1]=c1;
    }
  }

  for(i=0;i<n;i++){
    color[i]=0;
    pi[i]=-1;
    d[i]=2001;
  }
  d[0]=0;

  while(1){
    mincost=10000001;
    for(i=0;i<n;i++){
      if(color[i]!=2 && d[i]<mincost){
        mincost=d[i];
        ii=i;
      }
    }
    if(mincost==10000001)break;
    color[ii]=2;
    for(i=0;i<n;i++){
      if(G[ii][i]!=-1 && color[i]!=2 && G[ii][i]<d[i]){
	pi[i]=ii;
	d[i]=G[ii][i]+d[ii];
	color[i]=1;
      }
    }
  }
  for(i=0;i<n;i++)printf("%d %d\n",i,d[i]);
  return 0;
}