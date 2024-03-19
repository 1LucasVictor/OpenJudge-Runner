#include <stdio.h>
#define INF 100000000
void dfs(int, int);

int n;
int k[100],dis[100];
int vat[100][100],edg[100][100];

main(){
  int u, i, j;
  
  scanf("%d", &n);//input
  for(i=0;i<n;i++){
    scanf("%d", &u);
    scanf("%d", &k[u]);
    
    for(j=0;j<k[u];j++){
      scanf("%d", &vat[u][j]);
      scanf("%d", &edg[u][j]);
    }
  }
  
  for(i=0;i<n;i++) dis[i] = INF;//すべてのノードを無限大に初期化
  
  dfs(0, 0);
  
  for(i=0;i<n;i++){//output
    printf("%d %d\n", i, dis[i]);
  }
  return 0;
}

void dfs(int x, int y){
  int i;
  dis[x] = y;
  for(i=0;i<k[x];i++){
    if(dis[vat[x][i]] > y + edg[x][i]) dfs(vat[x][i], y + edg[x][i]);
  }
}


