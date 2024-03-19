#include <stdio.h>
#define Num 1000
#define INF 200000000
#define White 0
#define Gray  1
#define Black 2

int M[Num][Num];


int Prim(int n) {
    int u , v;
    int i;
    int min;
    /*D 最小木Tに属する頂点とV-Tに属する頂点をつなぐ辺の中で、最小のものを記録*/
    /*P 最小木におけるvの親を記録*/
    /*訪問状態:White 未訪問　Gray 隣接した頂点を選んだ時　Black (Grayから最小の辺でつながれた頂点を選択し)訪問済みとする*/
    int D[Num] , P[Num] , Color[Num];
    
    for(i = 0 ; i < n ; i ++) {
        D[i] = INF;
        P[i] = -1;
        Color[i] = White;
    }
    
    D[0] = 0;
    
    while(1) {
        min = INF;
        u = -1;
        
        for(i = 0 ; i < n ; i++) {
            if(min > D[i] && Color[i] != Black) {
                u = i;
                min = D[i];
            }
        }
        if(u == -1)
            break;
        Color[u] = Black;
        for(v = 0 ; v < n ; v++) {
            if(Color[v] != Black && M[u][v] != INF) {
                if(D[v] > M[u][v]) {
                    D[v] = M[u][v];
                    P[v] = u;
                    Color[v] = Gray;
                }
            }
        }
    }
    int Sum = 0;
    for(i = 0 ; i < n ; i++)
        if(P[i] != -1)
            Sum += M[i][P[i]];
    
    return Sum;
}

int main(void)
{
    int n;
    int i , j;
    
    scanf("%d" , &n);
    
    for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
            scanf("%d" , &M[i][j]);
            
            if(M[i][j] == -1)
                M[i][j] = INF;
        }
    }
    
    printf("%d\n" , Prim(n));

    return 0;
}

