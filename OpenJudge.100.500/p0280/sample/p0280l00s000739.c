#include <stdio.h>

#define INF 1000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1

int n;
int A[128][128];

int prim();

int main(){
        int i, j;

        scanf("%d", &n);

        for(i = 0 ; i < n ; i++){
                for(j = 0 ; j < n ; j++){
                        scanf("%d", &A[i][j]);
                }
        }

        printf("%d\n",prim());
        return 0;
}

int prim(){
        int i, u;
        int d[128], p[128], color[128];
        for(i = 0 ; i < n ; i++){
                d[i] = INF;
                p[i] = NIL;
                color[i] = WHITE;
        }

        d[0] = 0;

        int mincost, v;
        while(1){
                mincost = INF;
                for(i = 0 ; i < n ; i++){
                        if(color[i] != BLACK && d[i] < mincost){
                                mincost = d[i];
                                u = i;
                        }
                }

                if(mincost == INF)break;

                color[u] = BLACK;

                for(v = 0 ; v < n ; v++){
                        if(color[v] != BLACK && A[u][v] != NIL){
                                if(A[u][v] < d[v]){
                                        d[v] = A[u][v];
                                        p[v] = u;
                                        color[v] = GRAY;
                                }
                        }
                }
        }

        int res;
        for(i = res = 0 ; i < n ; i++){
                res += d[i];
        }
        return res;
}

