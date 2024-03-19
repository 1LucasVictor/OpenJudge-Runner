#include<stdio.h>
#include<stdlib.h>
#define INF 20000
#define WHITE 0
#define BLACK 1
void prim();
int w(int,int);
int n,**G,mincost,*d,*pi,*color;
int main(){
  int a,i,j,totalcost;
  scanf("%d",&n);
  G = (int**)malloc(sizeof(int*) * n);     // dynamic alloction
  for(i=0; i<n; i++){                      // *
    G[i] = (int*)malloc(sizeof(int) * n);  // *
  }                                        // *
  d = (int*)malloc(sizeof(int) * n);       // *
  pi = (int*)malloc(sizeof(int) * n);      // *
  color = (int*)malloc(sizeof(int) * n);   // end
  for(i=0; i<n; i++){                 // input data
    for(j=0; j<n; j++){               // *
      scanf("%d",&a);                 // *
      G[i][j] = (a == -1 ? INF : a);  // *
    }                                 // *
  }                                   // end
  prim();
  for(i=0,totalcost=0; i<n; i++){  // sum of cost
    totalcost += d[i];             // *
  }                                // end
  printf("%d\n",totalcost);
  return 0;
}

void prim(){
  int i,u,v;
  for(i=0; i<n; i++){
    d[i] = INF;
    pi[i] = INF;
    color[i] = WHITE;
  }
  d[0] = 0;
  while(1){
    mincost = INF;
    for(i=0; i<n; i++){
      if(color[i] != BLACK && d[i] < mincost){
        mincost = d[i];
        u = i;
      }
    }
    if(mincost == INF){
      break;
    }
    color[u] = BLACK;
    for(v=0; v<n; v++){
      if(color[v] != BLACK && w(u,v) < d[v]){
        pi[v] = u;
        d[v] = w(u,v);
      }
    }
  }
}

int w(int i,int j){
  return G[i][j];
}