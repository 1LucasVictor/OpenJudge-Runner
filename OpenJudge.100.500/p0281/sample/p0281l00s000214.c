#include<stdio.h>
#define MAX 20000
#define INFTY 100000000

int n, box[MAX][MAX];

void dij() {
	int i, j,minv, u, v, sum;
	int d[MAX], p[MAX], t[MAX];
	
	for ( i = 0; i < n; i++ ) {
		d[i] = INFTY;
		t[i] = 0;
	}
	
	d[0] = 0;
	
	while(1){
		minv = INFTY;
		u = -1;
		for ( i = 0; i < n; i++ ){
			if ( minv > d[i] && !t[i] ){
				u = i;
				minv = d[i];
			}
		}
		
		if ( u == -1 ) break;
		t[u] = 1;
			for ( v = 0; v < n; v++ ){
			if ( !t[v] && box[u][v] != INFTY ){
				if ( d[v] > d[u] + box[u][v] ){
					d[v] = d[u] + box[u][v];
				}
			}
		}	
	}
	
	for ( i = 0; i < n; i++ ) {
	printf("%d %d\n", i, (d[i] == INFTY? -1: d[i]));
	}
}

int main() {
	int i, j, a, b, c, d;


	scanf("%d", &n);
	for ( i = 0; i< n; i++ ){
		for ( j = 0; j < n; j++ ){
			box[i][j] = INFTY;
		}
	}

	for ( i = 0; i < n; i++ ){
		scanf("%d %d", &a, &b);
		for ( j = 0; j < b; j++ ){
			scanf("%d %d", &c, &d);
			box[a][c] = d;
		}
	}
	
	dij();
	
	return 0;
}

