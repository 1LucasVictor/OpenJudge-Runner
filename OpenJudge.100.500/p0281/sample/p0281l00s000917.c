#include <stdio.h>

int main()
{
  int n,i,j,k,u,v,c,mincost;

  scanf("%d",&n);

  int color[n],M[n][n],d[n],p[n];

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=-1;
    }
  }

  for(i=0;i<n;i++){
    color[i]=0;
    p[i]=-1;
    d[i]=1000001;
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v]=c;
    }
  }

  d[0]=0;

  while(1){
    
    mincost=1000001;
    u=-1;
    
    for(i=0;i<n;i++){
      if(color[i]!=2 && d[i]<mincost){
	u=i;
	mincost=d[i];
      }
    }

    if(mincost==1000001) break;

    color[u]=2;

    for(i=0;i<n;i++){
      if(M[u][i]!=-1 && color[i]!=2){
	if ((M[u][i]+d[u])<d[i]){
	  p[i]=u;
	  d[i]=M[u][i]+d[u];
	  color[i]=1;
	}
      }
    }
  }
  
  for(i=0;i<n;i++)printf("%d %d\n",i,d[i]);

  return 0;

}

