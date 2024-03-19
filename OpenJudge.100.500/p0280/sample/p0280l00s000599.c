#include<stdio.h>
#define N 101
#define W 0
#define B 1
#define INF 2001
int n,a[N][N],d[N];

void mst(){
  int i,j;
  int u,v;
  int pi[N],c[N];
  int mincost;
  for(u=1;u<=n;u++){
    d[u]=INF;
    pi[u]=NULL;
    c[u]=W;
  }
  d[1]=0;
  for(i=1;i<=n;i++){
    mincost = INF;
    for(j=1;j<=n;j++){
      if(c[j]!=B&&d[j]<=mincost){
	u = j;
	mincost = d[j];
      }
    }
    for(v=1;v<=n;v++){
      if(a[u][v]!=-1&&c[v]!=B &&a[u][v]<d[v]){
	pi[v] = u;
	d[v] = a[u][v];
      }
    }
     c[u]=B;
  }
}

int main(){
  int i,j;
  int sum = 0;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&a[i][j]);
    }
  }
  mst();
  for(i=1;i<=n;i++) sum += d[i];
  printf("%d\n",sum); 
  return 0;
}