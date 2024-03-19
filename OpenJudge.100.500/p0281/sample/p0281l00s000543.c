#include <stdio.h>
#define MAX 100
#define WHITE 0
#define BLACK 1
#define INFINITY 1000000000


int Array[MAX][MAX],color[MAX];
int d[MAX],p[MAX];
int n,u;

void prim(){
	int min;
	int i,j,m;

	for(i=0;i<n;i++){
		d[i] = INFINITY; /* ∞ */
		color[i] = WHITE;
		p[i] = NULL;
	}
	d[0] = 0;


	for(i=0;i<n;i++){
		min = INFINITY;

		for(j=0;j<n;j++){
			if(min > d[j] && color[j] != BLACK){
				min = d[j];
				u=j;
				
			}
		}

		for(m=0;m<n;m++){
			if(color[m] != BLACK && Array[u][m] + d[u] < d[m]){
					p[m] = u;
					d[m] = Array[u][m] + d[u];
					
			}
		}
			color[u] = BLACK;
	}
}

int main(){

	int i,j;
	int k,c,v;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			Array[i][j] = INFINITY;
		}
	}

for(i=0;i<n;i++){
		scanf("%d %d",&u,&k);
		for(j=0;j<k;j++){
			scanf("%d %d",&c,&v);
			Array[u][c] = v;
		}
	}

	prim();
	for(i=0;i<n;i++){
		printf("%d %d\n",i,d[i]);
	}

	return 0;
}
