#include<stdio.h>

#define MAX 100
#define INF 10000001
#define NIL -1
#define BLACK 1

typedef struct{
  int k;
  int v[MAX];
  int c[MAX];
}node;


int d[MAX],pi[MAX],color[MAX];
node A[MAX];

void initializeSS(int,int);
void dijkstra(int,int);


int main(){
  int i,j,n,u,sum;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&A[u].k);
    for(j=0;j<A[u].k;j++) scanf("%d%d",&A[u].v[j],&A[u].c[j]);
  }

  dijkstra(n,0);

  sum=0;
  
  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);
  
  return 0;
}

void initializeSS(int n,int s){
  int v;

  for(v=0;v<n;v++){
    d[v]=INF;
    pi[v]=NIL;
  }
  d[s]=0;
}

void dijkstra(int n,int s){
  int i,u,v,mincost;
  
  initializeSS(n,s);

  while(1){
    mincost=INF;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }

    if(mincost==INF) break;

    color[u]=BLACK;

    for(i=0;i<A[u].k;i++){
      v=A[u].v[i];
      if(color[v]!=BLACK && d[u]+A[u].c[i]<d[v]){
	pi[v]=u;
	d[v]=d[u]+A[u].c[i];
      }
    }
  }
}

