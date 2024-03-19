#include <stdio.h>
#define max 100
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n , m[max][max];

void dijkstra()
{
	int minv;
	int d[max];
	int color[max];
	
	for(int i = 0; i < n; i++)
	{
		d[i] = INFTY;
		color[i] = WHITE;
	}
	d[0] = 0;
	color[0] = GRAY;
	
	while(1)
	{
		minv = INFTY;
		int u = -1;
		for(int i = 0; i < n; i++)
		{
			if(minv > d[i] && color[i] != BLACK)
			{
				u = i;
				minv = d[i];
			}
		}
		if(u == -1){		break;}
		color[u] = BLACK;
		for(int v = 0; v < n; v++)
		{
				if(color[v] != BLACK && m[u][v] != INFTY)
				{
					if(d[v] > d[u] + m[u][v])
					{
						d[v] = d[u] + m[u][v];
						color[v] = GRAY;
					}
				}
		}
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d ",i);
		if(d[i] == INFTY)
		{
			printf("-1\n");
		}
		else{
			printf("%d\n",d[i]);
		}
	}
}

int main(void)
{
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			m[i][j] = INFTY;
		}
	}
	int k , c , u , v;
	for( int i = 0; i < n; i++)
	{
		scanf("%d",&u);
		scanf("%d",&k);
		for(int j = 0; j < k; j++)
		{
			scanf("%d",&v);
			scanf("%d",&c);
			m[u][v] = c;
		}
	}
	dijkstra();
	return 0;
}
