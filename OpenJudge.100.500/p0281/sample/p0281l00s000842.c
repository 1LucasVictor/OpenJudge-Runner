#include <stdio.h>
#define N 100
#define NIL -1
#define INF 2000000000
int main(){
  int n;
  int pi[N];
  int d[N];
  int a,b,k,l,i,j,u,v,min=INF,count=0;
  int G[N][N];
  int color[N];
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      G[i][j] = INF;
    }
  }
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    for(j=0;j<b;j++){
      scanf("%d%d",&k,&l);
      G[a][k] = l;
    }
  }
  
  for(u=0;u<n;u++){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = 0;
  }

  d[0] = 0;
  
  while(1){
    min = INF;
    u = -1;
    for(i=0;i<n;i++){
      if((color[i] != 1) && (d[i] < min)){
        min = d[i];
        u = i;
      }
    }
    
    if(u == NIL){
      break;
    }
    
    color[u] = 1;
    
    for(v=0;v<n;v++){
      if((G[u][v] != -1) && (color[v] != 1) && (d[u] + G[u][v] < d[v])){
	pi[v] = u;
	d[v] = d[u] + G[u][v];
      }
    }
  }
  
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  
  
  return 0;
}

