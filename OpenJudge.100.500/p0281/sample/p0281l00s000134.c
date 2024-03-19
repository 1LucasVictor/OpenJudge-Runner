#include <stdio.h>

#define INF 1000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1

int n;
int A[128][128];

void dijkstra(int);
void printresult(int *);

void init(){
        int i, j;
        for(i = 0 ; i < n ; i++){
                for(j = 0 ; j < n ; j++){
                        A[i][j] = NIL;
                }
        }
}

int main(){
        int i, j, numto, k, num, weight;

        scanf("%d", &n);
        init();
        for(i = 0 ; i < n ; i++){
                scanf("%d %d", &num, &k);
                for(j = 0 ; j < k ; j++){
                        scanf("%d %d", &numto, &weight);
                        A[num][numto] = weight;
                }
        }

        dijkstra(0);

        return 0;
}

void dijkstra(int s){
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
                                if(d[u] + A[u][v] < d[v]){
                                        d[v] = A[u][v] + d[u];
                                        p[v] = u;
                                        color[v] = GRAY;
                                }
                        }
                }
        }
                printresult(d);
}

void printresult(int *d){
        int i;

        for(i = 0 ; i < n ; i++){
                printf("%d %d\n", i, d[i]);
        }
}

