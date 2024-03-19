#include<stdio.h>

#define INF 9999999
#define NIL -1
#define BLACK 1
#define WHITE 0

int n;
int G[100][100];
int d[100];
int pi[100];
int color[100];

void initializeSingleSourse(int s){
  int i;
 for(i=0;i<n;i++){
    d[i] = INF;
    pi[i] = NIL;
  }
  d[s] = 0;
}

void dijkstra(int s){
  int i,j,u,mincost,v;
  
  initializeSingleSourse(s);
  while(1){
    mincost = INF;
    for(i=0;i<n;i++){
      if((color[i]!=BLACK)&&(d[i]<mincost)){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INF)
      break;

    color[u] = BLACK;

    for(v=0;v<n;v++){
      if(G[u][v]!= -1)
	if((color[v] != BLACK)&&(G[u][v]+d[u]<d[v])){
	    pi[v] = u;
	    d[v] = d[u] +G[u][v];
	  }    
    
    }
  }
};

int main(){

  int u,k,i,j,v,sum=0;
  
  scanf("%d",&n);
 
 for(i=0;i<n;i++){
     for(j=0;j<n;j++){
       G[i][j]= NIL;
     }
 }

  
  
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
     for(j=0;j<k;j++){
       scanf("%d",&v);
       scanf("%d",&G[u][v]);
     }
  }

  dijkstra(0);


  
 for(i=0;i<n;i++){
   printf("%d %d\n",i,d[i]);
 }
  
   return 0;
}

