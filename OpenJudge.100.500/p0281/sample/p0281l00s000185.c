#include<stdio.h>
  
  static int INFTY = 999999;
  static int WHITE = 0;
  static int GRAY = 1;
  static int BLACK = 2;
  int n;
  int M[100][100];
  void dijkstra(){
    int minv;
    int d[100],color[100];
    for(int i = 0; i < n;i++){
      d[i] = INFTY;
      color[i] = WHITE;
    }
    d[0] = 0;
    color[0] = GRAY;
    while(1){
      minv = INFTY;
      int u = -1;
      for(int i = 0;i < n;i++){
if(minv > d[i] && color[i] != BLACK){
 u = i;
 minv = d[i];
}
}
      if(u == -1)break;
      color[u] = BLACK;
      for(int v = 0;v < n;v++){
if(color[v] != BLACK && M[u][v] != INFTY){
 if(d[v] > d[u] + M[u][v]){
   d[v] = d[u] + M[u][v];
   color[v] = GRAY;
   }
}
      }
    }

    for(int i = 0;i < n;i++){
        printf("%d %d\n",i,(d[i] == INFTY? -1 : d[i]));
        }
  }

  int main(){
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
      for(int j = 0;j < n;j++){
M[i][j] = INFTY;
      }
    }

    int k,c,u,v;
    for(int i = 0;i < n;i++){
      scanf("%d%d",&u,&k);
      for(int j = 0;j < k;j++){
          scanf("%d%d",&v,&c);
          M[u][v] = c;
      }
    }
    dijkstra();
    return 0;
}




