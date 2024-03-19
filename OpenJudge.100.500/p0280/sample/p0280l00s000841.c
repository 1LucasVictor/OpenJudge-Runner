#include<stdio.h>
#define MAX 100
#define INFTY 10000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int fanc(void );

int n, G[MAX][MAX];

int main(){
    int i,j,e;

    scanf("%d", &n);

    for(i = 0; i < n; i++ ){
        for(j = 0; j < n; j++ ){
           scanf("%d", &e);
           if(e == -1) G[i][j] = INFTY;
           else G[i][j] = e;
        }
    }

    printf("%d\n", fanc());

    return 0;
}

int fanc(void ){
    int i,u,v,sum,minv;
    int d[MAX],p[MAX],color[MAX];

    for(i = 0; i < n; i++ ){
        d[i] = INFTY;
        p[i] = -1;
        color[i] = WHITE;
    }

    d[0] = 0;

    while(1){
        minv = INFTY;
        u = -1;
        for( i = 0; i < n; i++ ){
            if( minv > d[i] && color[i] != BLACK ){
                u = i;
                minv = d[i];
            }
        }
        if( u == -1 ) break;
        color[u] = BLACK;
        for( v = 0; v < n; v++ ){
            if( G[u][v] != INFTY && color[v] != BLACK ){
                if(d[v] > G[u][v]) {
                    d[v] = G[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }

    sum = 0;
    for( i = 0; i < n; i++ ){
        if(p[i] != -1 ) {
          sum += G[i][p[i]];
        }
    }

    return sum;

}

