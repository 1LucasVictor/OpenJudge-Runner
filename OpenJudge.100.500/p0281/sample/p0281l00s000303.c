#include <stdio.h>
#define BLACK 2
#define GRAY 1
#define WHITE 0
#define MAX 2000
#define INF 1<<21
int n;
int M[MAX][MAX];
void dijkstra();
int main(){
  int i,j,u,k,c,v;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = INF;
    }
  }
 
 for(i=0;i<n;i++){
   scanf("%d %d",&u,&k);
   for(j=0;j<k;j++){
     scanf("%d %d",&v,&c);
     M[u][v]=c;
   }
 }
  dijkstra();
  
  return 0;
}

void dijkstra(){
    int u,mincost;
  int i,v;
  int d[MAX],color[MAX];
  for(i = 0;i<n;i++){
    d[i] = INF;
    color[i] = WHITE;
  }

  
  d[0] = 0;
  
  while(1){
   
    mincost = INF;
    u = -1;
    for(i=0;i<n;i++){
 
      if(mincost>d[i] && color[i]!=BLACK){
	u = i;
	mincost = d[i];
      }
    }
    if(u == -1)break;


      
    color[u] = BLACK;
    
    for(v = 0;v<n;v++){
      if(color[v] != BLACK  && M[u][v]!=INF){
	if(d[v] > M[u][v]+d[u]){
	  d[v] = M[u][v]+d[u];
	  color[v] = GRAY;
	}
      }
    }
  }

  int sum = 0;
  for(i=0;i<n;i++){
    if(d[i] == INF )
      printf("%d -1\n",i);
    else  printf("%d %d\n",i,d[i]);
  }

}



