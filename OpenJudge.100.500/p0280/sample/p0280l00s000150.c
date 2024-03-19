#include<stdio.h>

static const int MAX = 500;
static const int INF = (1<<21);

main(){
  int n, i, j, e, sum;
  int M[MAX][MAX];
  int u, v;
  int minv;
  int d[MAX];
  int p[MAX];
  int vis[MAX];

  scanf("%d", &n);

  for(i=0;i<n;i++){
    for (j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j]=(e==-1)?INF:e;
    }
  }

  for(i=0;i<n;i++) {
    d[i]=INF;
    p[i]=-1;
    vis[i]=0;
  }

  d[0]=0;

  while(1){
    minv=INF;
    u=-1;
    for (i=0;i<n;i++){
      if (minv>d[i]&&!vis[i]){
	u=i;
	minv=d[i];
      }
    }
    if (u==-1)break;
    vis[u]=1;
    for(v=0;v<n;v++){
      if (!vis[v] && M[u][v] != INF){
	if (d[v]>M[u][v]){
	  d[v]=M[u][v];
	  p[v]=u;
	}
      }
    }
  }

  sum=0;

  for(i= 0;i<n;i++)if(p[i]!=-1)sum+=M[i][p[i]];

  printf("%d\n",sum);

  return 0;
}

