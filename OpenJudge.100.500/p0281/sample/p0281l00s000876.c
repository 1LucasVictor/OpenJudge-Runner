#include<stdio.h>

#define INF (1<<30)

int adj[100][100],n;

void Dijkstra(void){
	int i,u,v,minCost;
	int c[100],visited[100];
	for(i=0;i<n;i++){
		c[i]=INF;	visited[i]=0;
	}

	c[0]=0;
	while(1){
		minCost=INF;
		for(i=0;i<n;i++){
			if(visited[i]==0 && c[i]<minCost){
				minCost=c[i];
				u=i;
			}
		}if(minCost==INF)break;

		visited[u]=1;
		for(v=0;v<n;v++){
			if(visited[v]==0 && c[v]>c[u]+adj[u][v]){
				c[v]=c[u]+adj[u][v];
			}
		}
	}

	for(i=0;i<n;i++){
		printf("%d %d\n",i,c[i]);
	}
}

int main(){
	int i,j,u,k,v,c;
	scanf("%d",&n);		for(i=0;i<n;i++)for(j=0;j<n;j++)adj[i][j]=INF;

	for(i=0;i<n;i++){
		scanf("%d%d",&u,&k);
		for(j=0;j<k;j++){
			scanf("%d%d",&v,&c);
			adj[u][v]=c;
		}
	}
	Dijkstra();

	return 0;
}

