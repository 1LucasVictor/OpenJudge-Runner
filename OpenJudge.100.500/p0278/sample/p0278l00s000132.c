#include <stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
int d[100];
int A[100][100], n, color[100], Q[100], num=1;
void bfs(int s){
    int u, v=1;
    for(u = 2; u <= n; u++)
        color[u] = WHITE;
    color[s] = GRAY;
    d[s] = 0;
    Q[num] = s;
    while(num != 0){
        u = Q[num];
        num--;
        for(v=1; v<=n; v++){
            if(color[A[u][v]] == WHITE && A[u][v] !=0){
                color[A[u][v]] = GRAY;
                d[A[u][v]] = d[u] + 1;
                num++;
                Q[num] = A[u][v];
            }
        }
        color[u] = BLACK;
    }
}
int main(){
    int i, j, u, k, v;
    
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&u);
        scanf("%d",&k);
        for(j = 1; j <= k; j++){
            scanf("%d",&v);
            A[u][j] = v;
            //num++;
            //Q[num] = v;
        }
    }
    bfs(1);
    for(i = 1; i <= n; i++)
        printf("%d %d\n",i, d[i]);
    return 0;
}