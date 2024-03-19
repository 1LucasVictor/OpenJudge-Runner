#include<stdio.h>
#define N 100
#define MAX 100000000



void dijks();

int n,G[N][N];

int main(){
  int i,j,u,k,c,v;

  scanf("%d",&n);

  for(i = 0; i< n; i++){
    for(j = 0; j < n; j++){
      G[i][j] = MAX;
    }
  }

  for(i = 0; i< n; i++){
    scanf("%d %d",&u,&k);
    for(j = 0; j < k; j++){
      scanf("%d %d",&v,&c);
      G[u][v] = c;
    }
  }

  dijks();
  return 0;

}

void dijks(){

  int minv,i,u,v;
  int d[N],color[N];

  for(i = 0; i < n; i++){
    d[i] = MAX;
    color[i] = 0;
  }

  d[0] = 0;
  color[0] = 1;

  while(1){
    minv =MAX;
    u = -1;
    for(i = 0; i < n; i++){
      if(minv > d[i] && color[i] != 2){
        u  = i;
        minv = d[i];
      }
    }

    if(u == -1)break;
    color[u] = 2;

    for(v = 0; v < n; v++){
      if(color[v] != 2 && G[u][v] != MAX){
        if(d[v] > d[u] + G[u][v]){
          d[v] = d[u] + G[u][v];

color[v] = 1;
        }
      }
    }
  }

  for(i = 0; i < n; i++){
    printf("%d ",i);
    if(d[i] == MAX)printf("-1");
    else printf("%d\n",d[i]);
  }
}