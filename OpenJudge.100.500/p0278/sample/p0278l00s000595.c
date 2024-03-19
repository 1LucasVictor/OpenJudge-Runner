#include <stdio.h>
int d[100];
int A[100][100], n;
void bfs(int a, int c){
    int i;
    for(i =1; i <= n; i++){
        if(A[a][i] == 1){
            bfs(i, c+1);
        }
        d[a] = c;
    }
    return;
}
int main(){
    int i, j, u, k, v;
    
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            A[i][j] = 0;
            d[i] = -1;
        }
    }
    for(i = 0; i < n; i++){
        scanf("%d",&u);
        scanf("%d",&k);
        for(j = 1; j <= k; j++){
            scanf("%d",&v);
            A[u][v] = 1;
        }
    }
    bfs(1, 0);
    for(i = 1; i <=n; i++)
        printf("%d %d\n",i, d[i]);
}