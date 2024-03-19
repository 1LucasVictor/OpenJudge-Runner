#include <stdio.h>
#define INF 1000000
#define white 0
#define gray 1
#define black -1

int prim();
int n,M[100][100];
int main (){
  int e,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j] = e;
      if(e==-1)M[i][j]=INF;
    }
  }
  printf("%d\n",prim());

  return 0;
}
int prim(){
  int i,u,mv,d[100],p[100],color[100],sum=0,v;

  // Initialize
  for(i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=white;
  }

  // determine Start Node
  d[0]=0;

  // Do Prim's Algorithm
  while(1){
    mv=INF;
    u=-1; // Canditate Node of Minimal Spaning Tree
    for(i=0;i<n;i++){
      if(mv>d[i]&&color[i]!=black){
	u=i;
	mv=d[i];
      }
    }
    if(u==-1)break; // If it can't find any node to add
    color[u]=black;
    for(v=0;v<n;v++){
      if(color[v]!=black&&M[u][v]!=INF){
	if(d[v]>M[u][v]){
	  d[v]=M[u][v];
	  p[v]=u;
	  color[v]=gray;
	}
      }
    }
  }
  
  for(i=0;i<n;i++){
    if(p[i]!=-1)sum+=M[i][p[i]];
  }
  return sum;
}

