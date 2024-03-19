#include <stdio.h>
#define INF 2001
#define GRAY 0
#define WHITE 1
#define BLACK -1
#define N 100

void prim( int );

int n, color[N+1], d[N+1], adj[N+1][N+1], p[N+1];

int main(){
    int i, j, sum = 0, m;

    //input
    scanf("%d", &n);
    for( i=0; i<n; i++ ){
	for( j=0; j<n; j++){
	    scanf("%d", &m);
	    if( m == -1 ) adj[i][j] = INF;
	    else adj[i][j] = m;
	}
    }

    //calculate
    prim( 0 );

    //calculate sum
    for( i=0; i<n; i++ ){
	if( p[i] != -1 )
	    sum += adj[i][p[i]];
    }
    //print
    printf("%d\n", sum);

    return 0;
}

void prim( int start ){//1-origin
    int i, j, k, l, mincost;

    //initialize
    for(i = 0; i<n; i++){
	d[i] = INF;
	color[i] = WHITE;
	p[i] = -1;
    }
    d[start] = 0;

    //calculate
    while (1){
	mincost = INF;
	for(i = 0; i<n; i++){
	    if( color[i] != BLACK && d[i] < mincost ){
		mincost = d[i];
		k = i;
	    }
	}
	if( mincost == INF ) break;

	color[k] = BLACK;

	for( i=0; i<n; i++){
	    if( color[i] != BLACK && adj[k][i] != INF ){
		if( d[i] > adj[k][i] ){
		    d[i] = adj[k][i];
		    p[i] = k;
		    color[i] = GRAY;
		}
	    }
	}
    }
    return ;
}

