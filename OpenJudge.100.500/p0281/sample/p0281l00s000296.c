#include <stdio.h>
#define Num 10000
#define INF 200000000
#define White 0
#define Gray  1
#define Black 2
/*隣接行列*/
int M[Num][Num];
int n;

void dijkstra() {
    int u , v;
    int i;
    int min;

    int D[Num] , P[Num] , Color[Num];
    

    for(i = 0 ; i < n ; i ++) {
        D[i]     = INF;
        Color[i] = White;
    }
    
    D[0] = 0;
    Color[0] = Gray;
    
    while(1) {
        min = INF;
        u   = -1;
        
        for(i = 0 ; i < n ; i++) {
            if(min > D[i] && Color[i] != Black) {
                u   = i;
                min = D[i];
            }
        }
        if(u == -1)
            break;
        Color[u] = Black;
        for(v = 0 ; v < n ; v++) {
            if(Color[v] != Black && M[u][v] != INF) {
                /*dijkstraのアルゴリズムの適用*/
                if(D[v] > D[u] + M[u][v]) {
                    D[v]     = D[u] + M[u][v];
                    P[v]     = u;
                    Color[v] = Gray;
                }
            }
        }
    }
    for(i = 0 ; i < n ; i++)
        printf("%d %d\n" , i , ((D[i] == INF) ? -1 : D[i]));
    
}

int main(void)
{
    int i , j;
    int u , k , v , c;
    scanf("%d" , &n);
    
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            M[i][j] = INF;
        }
    }
    
    for(i = 0 ; i < n ; i++) {
        scanf("%d %d" , &u , &k);
        for(j = 0 ; j < k ; j++) {
            scanf("%d %d" , &v , &c);
            M[u][v] = c;
        }
    }
    
    dijkstra();
    
    return 0;
}

