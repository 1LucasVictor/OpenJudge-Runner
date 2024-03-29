#include<stdio.h>
#define MAX 100
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2
 
int n,T[MAX][MAX];
 
void dijkstra(){
  int minv,i,v,u;
  int d[MAX],color[MAX];
 
  for(i=0;i<n;i++){
    d[i] = INFTY;
    color[i] = WHITE;
  }
 
  d[0] = 0;
  color[0] = GRAY;
  
  while(1){
    minv = INFTY;
    u = -1;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i] != BLACK){
	u = i;
	minv = d[i];
      }
    }
    
    if(u == -1)break;
    color[u] = BLACK;
    
    for(v=0;v<n;v++){
      if(color[v] != BLACK && T[u][v] != INFTY){
	if(d[v]>d[u]+T[u][v]){
	  d[v] = d[u] + T[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }
  
  for(i=0;i<n;i++){
    printf("%d",i);
    printf(" ");
    d[i]= (d[i] == INFTY) ? -1 : d[i];
    printf("%d\n",d[i]);
  }
}
 
int main(){
  int i,j,k,c,u,v;
 
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      T[i][j] = INFTY;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      T[u][v] = c;
    }
  }
  
  dijkstra();
 
  return 0;
}