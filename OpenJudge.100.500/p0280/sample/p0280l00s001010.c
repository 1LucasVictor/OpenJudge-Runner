#include <stdio.h>
#define MAX 100
#define INFTY (1<<21)
#define BLACK 2
#define GRAY 1
int n;
int a[MAX][MAX];

int omomi(void);

int main(){
int i,j,e;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&e);
			if(e == -1)a[i][j] = INFTY;
			else a[i][j] = e;
		}
	}

	printf("%d\n",omomi());
	return 0;
}

int omomi(){
	int u,minv,i,sum=0,v;
	int d[MAX],p[MAX],color[MAX];

	for(i=0;i<n;i++){
		d[i] = INFTY;
		p[i] = -1;
		color[i] = 0;
	}

	d[0] = 0;

	while(1){
		minv = INFTY;
		u = -1;
		for(i = 0;i<n;i++){
			if(minv > d[i] && color[i] != BLACK){
				u = i;
				minv = d[i];
			}
		}
		if(u == -1)break;
		color[u] = BLACK;
		for(v = 0;v<n;v++){
			if(color[v] != BLACK && a[u][v] != INFTY){
				if(d[v] > a[u][v]){
					d[v] = a[u][v];
					p[v] = u;
					color[v] = GRAY;
				}
			}
		}
	}
		for(i = 0;i<n;i++){
			if(p[i] != -1)sum += a[i][p[i]];
		}
	
	return sum;
}