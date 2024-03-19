  #include <stdio.h>
  #define MAX 101
  #define INFINITY 1048576
  #define WHITE -1
  #define GRAY 0
  #define BLACK 1

  int M[MAX][MAX];

  void search(int n,int *d){
    int u, v, min, i, j, p[MAX], c[MAX];

    for(i = 0; i < n; i++){
      c[i] = WHITE;
      d[i] = INFINITY;
    }

    d[0] = 0;
    c[0] = GRAY;

    while(1){
      min = INFINITY;
      u = -1;

      for(i = 0; i < n; i++){
        if(min > d[i] && c[i] != BLACK){
          u = i;
          min = d[i];
        }
      }

      if(u == -1) break;

      c[u] = BLACK;

      for(v = 0; v < n; v++){
        if(c[v] != BLACK && M[u][v] != INFINITY){
          if(d[v] > M[u][v] + d[u]){
            d[v] = M[u][v] + d[u];
            c[v] = GRAY;
          }
        }
      }
    }

    return;

  }

  int main(void){
    int n,i,j,k,v,a,d[MAX];

    scanf("%d",&n);
    for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
        M[i][j] = INFINITY;
      }
    }

    for(i = 0; i < n; i++){
      scanf("%d%d",&a,&k);
      for(j = 0; j < k; j++){
        scanf("%d",&v);
        scanf("%d",&M[i][v]);
      }
    }

    search(n,d);

    for(j = 0; j < n; j++){

      printf("%d ",j);

      if(d[j] == INFINITY) printf("%d",-1);

      else printf("%d\n",d[j]);
    }
    return 0;
  }

