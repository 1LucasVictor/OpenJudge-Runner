#include <stdio.h>
#define INF 1000000
#define WHITE 0
#define BLACK 1
#define N 100
 
int n;
int w[N][N];

void dijkstra(void);

int main(){
 
    int i,j;
    int u,v;
    int k;
    int c;
 
    scanf("%d",&n);
 
    for( i = 0 ; i < n ; i++ ){
        for( j = 0 ; j < n ; j++ ){
            w[i][j] = INF;
        }
    }
     
    for( i = 0 ; i < n ; i++ ){
        scanf("%d %d",&u,&k);
        for( j = 0 ; j < k ; j++ ){
            scanf("%d %d",&v,&c);
            w[u][v] = c;
        }
    }
     
    dijkstra();
 
    return 0;
}

void dijkstra(){
 
    int i,u,v;
    int mincost;
    int d[N],color[N],pi[N];
 
    for( i = 0 ; i < n ; i++ ){
        d[i] = INF;
        color[i] = WHITE;
    }
 
    d[0] = 0;
 
    while( 1 ){
 
        mincost = INF;
 
        for( i = 0 ; i < n ; i++ ){
            if( color[i] != BLACK && d[i] < mincost ){
                mincost = d[i];
                u = i;
            }
        }
 
        if( mincost == INF ){
            break;
        }
 
        color[u] = BLACK;
 
        for( v = 0 ; v < n ; v++ ){
 
            if(  color[v] != BLACK && w[u][v] + d[u] < d[v] ){
	      pi[v]=u;
                d[v] = w[u][v] + d[u];
            }
        }
 
    }
 
 
    for( i = 0 ; i < n ; i++ ){
        if( d[i] != INF ){
            printf("%d %d\n",i,d[i]);
        }
    }
 
}
 