#include <stdio.h>
#define BLACK 1
#define WHITE 0
#define inf 100000
int main(){
    int c, n, k, i, j, id, v[100][100], w[100][100], min, d[100], u=0, color[100];
    scanf("%d",&n);
    for(i = 0; i < n;  i++){
        d[i] = inf;
        color[i] = WHITE;
        
        scanf("%d",&id);
        scanf("%d",&k);
        for(j = 0; j < k; j++){
            scanf("%d",&c);
            v[id][c] = 1;
            scanf("%d",&w[id][c]);
        }
    }
    d[0] = 0;
    while(1){
        min = inf;
        for(j = 0; j<n; j++){
            if(d[j] < min && color[j] == WHITE){
                min = d[j];
                u = j;
            }
        }
        if(min == inf) break;
        color[u] = BLACK;
        for(j = 1; j<n; j++){
            if(v[u][j] == 0) continue;
            if(d[u] + w[u][j] < d[j] && color[j] == WHITE) d[j] = d[u] + w[u][j];
        }
    }
    for(i = 0; i < n; i++) printf("%d %d\n",i, d[i]);
    return 0;
}