#include<stdio.h>
#define MAX 20000
#define INFTY 100000000

int n, box[MAX][MAX];

int prim() {
	int i, j,minv, u, v, sum;
	int d[MAX], p[MAX], t[MAX];
	
	for ( i = 0; i < n;i++ ) {
		d[i] = INFTY;
		p[i] = -1;
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
			if ( ! t[v] && box[u][v] != INFTY ){
				if ( d[v] > box[u][v] ){
					d[v] =  box[u][v];
					p[v] = u;
				}
			}
		}
	}

	sum = 0;

	for ( i = 0; i < n; i++ ){
		if ( p[i] != -1 ) sum += box[i][p[i]];
	}

	return sum;
}

int main() {
	int i, j, fact;

	scanf("%d", &n);
	for ( i = 0; i< n; i++ ){
	  for ( j = 0; j < n; j++ ){
	    scanf("%d", &fact);
	    box[i][j] = (fact == -1) ? INFTY : fact;
	  }
	}
	printf("%d\n", prim());
	
	return 0;
}
