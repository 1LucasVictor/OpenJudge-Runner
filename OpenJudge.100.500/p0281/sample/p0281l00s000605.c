#include<stdio.h>

int WHITE = 0;
int GRAY = 1;
int BLACK = 2;
int INFTY = 100000000;

int i, j, v, n, M[100][100];

void dijkstra(){
    int minv;
    int d[100], color[100];

    for(i=0;i<n;i++){
        d[i] = INFTY;
        color[i] = WHITE;
    }

    d[0] = 0;
    color[0] = GRAY;
    while( 1 ){
        minv = INFTY;
        int u = -1;
        for(i=0;i<n;i++){
            if(minv > d[i] && color[i] != BLACK){
                u=i;
                minv = d[i];
            }
        }
        if(u==-1)
        break;
        color[u] = BLACK;
        for(v=0;v<n;v++){
            if(color[v] != BLACK && M[u][v] != INFTY){
                if(d[v] > d[u] + M[u][v]){
                    d[v] = d[u] + M[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d %d\n", i, d[i] == INFTY ? -1 : d[i]);
    }
}

int main(){
    int k, c, u, v;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            M[i][j] = INFTY;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d %d", &u, &k);
        for(j=0;j<k;j++){
            scanf("%d %d", &v, &c);
            M[u][v] = c;
        }
    }

    dijkstra();

    return 0;
}