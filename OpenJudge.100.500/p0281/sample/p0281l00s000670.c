#include <stdio.h>
#define inf 1000000
#define NIL -1

void f(void);
int n,M[100][100];

int main()
{
  int k,u,c,v,i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = inf;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v] = c;
    }
  }

  f();

  return 0;
}

void f()
{
  int d[100],color[100],min,u,i,v,g;

  for(i=0;i<n;i++){
    d[i] = inf;
    color[i] = 0;
  }

  d[0] = 0;
  color[0] = 1;

  while(1){
    min = inf;
    u = NIL;
    for(i=0;i<n;i++){
      if(color[i]!=2 && d[i]<min){
        min = d[i];
        u = i;
      }
    }

    if(u == NIL) break;
    color[u] = 2;

    for(v=0;v<n;v++){
      if(color[v]!=2 && M[u][v]!=inf){
        if(d[u] + M[u][v] < d[v]){
          d[v] = d[u] + M[u][v];
          color[v] = 1;
        }
      }
    }
  }

  for(i=0;i<n;i++){
    if(d[i] == inf) g = -1;
    else g = d[i];
    printf("%d %d\n",i,g);
  }
}
