#include<stdio.h>
#define N 100
#define INF 1<<21
int G[N][N], n, labels[N], d[N], p[N];

/*
  labels:
  0 unvisited
  1 tmp
  2 included
 */

void prim(){
    int i,u, mincost;
    for(i=0; i<n; i++) {
	labels[i]=0;
	d[i]=INF;
    }
    d[0]=0;
    p[0]= -1;
    
    while (1) {
	/*find the vertex with the minimum weight and return u*/
	mincost = INF;
	for(i=0; i<n; i++) {
	    if(labels[i]!=2 && d[i]<mincost) {
		mincost= d[i];
		u=i;
		    }
	}
	
	if (mincost == INF)break;
	
	labels[u]=2;
	
	/* */
	for(i=0; i<n; i++){
	    if(labels[i]!=2 && G[u][i] != -1){
		if(G[u][i] < d[i]){
		    d[i]=G[u][i];
		    p[i]=u;
		    labels[i]=1;
		}
	    }
	}

	
    }
}

int min(int x, int y){
    return (x>=y) ? y: x;
}

int mincost[N];
int prim2() {
    int i;
    for(i=0; i<n; i++) {
	mincost[i]=INF;
	labels[i]=0;
    }
    mincost[0]=0;
    int res=0;
    while (1){
	int u,v=-1;
	for(u=0; u<n; u++){
	    if(labels[u]==0 && (v == -1 || mincost[u] < mincost[v])) v=u;
	}
	if (v==-1) break;
	labels[v]=1;
	res += mincost[v];
	for(u=0; u<n; u++){
	    if(G[v][u]!=-1)mincost[u] = min(mincost[u], G[v][u]);
	}
    }
    return res;

}

int main(){
    int i,j, sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	    scanf("%d",&G[i][j]);
	}
    }
    
    printf("%d\n", prim2());
    return 0;
}