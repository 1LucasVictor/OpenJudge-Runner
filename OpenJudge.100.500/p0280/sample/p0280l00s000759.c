#include <stdio.h>
#include <limits.h>

#define NIL -1
#define WHITE 0
#define BLACK 1
#define MAX 100

int matrix[MAX][MAX];
int n;

void prim(){

    int i;
    int d[n],pi[n],color[n];
    int mincost;
    int u;
    int v;
    int sum = 0;

    for( i = 0 ; i < n ; i++ ){
        d[i] = INT_MAX;
        pi[i] = NIL;
        color[i] = WHITE;
    }

    d[0] = 0;
    pi[0] = NIL;

    while( 1 ){

        mincost = INT_MAX;

        for( i = 0 ; i < n ; i++ ){
            if( color[i] != BLACK && d[i] < mincost ){
                mincost = d[i];
                u = i;
            }

        }

        if( mincost == INT_MAX ){
            break;
        }

        color[u] = BLACK;

        for( v = 0 ; v < n ; v++ ){

            if( color[v] != BLACK && matrix[u][v] != INT_MAX ){
                
                if( matrix[u][v] < d[v] ){
                    
                    pi[v] = u;
                    d[v] = matrix[u][v];

                }
            }
        }

    }

    for( i = 0 ; i < n ; i++ ){
        if( pi[i] != NIL ){
            sum += matrix[i][pi[i]];
        }
    }

    printf("%d\n",sum);

}

int main(){

    int i,j;
    scanf("%d",&n);

    for( i = 0 ; i < n ; i++ ){
        for( j = 0 ; j < n ; j++ ){
            scanf("%d",&matrix[i][j]);
            if( matrix[i][j] == NIL ){
                matrix[i][j] = INT_MAX;
            }
        }
    }

    prim();

    return 0;
}