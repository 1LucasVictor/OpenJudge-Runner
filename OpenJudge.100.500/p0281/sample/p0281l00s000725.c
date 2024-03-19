#include <stdio.h>
#define INF (1<<21)
#define WHITE 0
#define BLACK 1
#define MAX 100

int n;
int matrix[MAX][MAX];

void dijkstra(){

    int i,u,v;
    int mincost;
    int d[MAX],color[MAX],pi[MAX];

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

            if( matrix[u][v] + d[u] < d[v] ){
                d[v] = matrix[u][v] + d[u];
            }
        }

    }


    for( i = 0 ; i < n ; i++ ){
        if( d[i] != INF ){
            printf("%d %d\n",i,d[i]);
        }
    }

}

int main(){

    int i,j;
    int u,v;
    int k;
    int c;

    scanf("%d",&n);

    for( i = 0 ; i < n ; i++ ){
        for( j = 0 ; j < n ; j++ ){
            matrix[i][j] = INF;
        }
    }
    
    for( i = 0 ; i < n ; i++ ){
        scanf("%d %d",&u,&k);
        for( j = 0 ; j < k ; j++ ){
            scanf("%d %d",&v,&c);
            matrix[u][v] = c;
        }
    }
    
    dijkstra();

    return 0;
}