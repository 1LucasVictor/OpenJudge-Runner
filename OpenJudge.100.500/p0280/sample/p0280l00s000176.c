#include<stdio.h>
#include<stdlib.h>

#define INF 9999999
#define NIL 0
#define N 100

int prim(int n,int w[N][N],int r){
  int d[n];
  int pi[n];
  char color[n];
  int i,v,u,maincost;
  int num=0;

  for(u=0;u<n;u++){
    d[u]=INF;
    pi[u]=NIL;
    color[u]='W';
  }
  d[r]=0;
  while(1){
    maincost=INF;
    for(i=0;i<n;i++){
      if(color[i]!='B'&&d[i]<maincost){
	maincost=d[i];
	u=i;
      }
    }
    if(maincost==INF) break;
    color[u]='B';
    for(v=0;v<n;v++){
      if(color[v]!='B'&&w[u][v]<d[v]&&w[u][v]!=-1){
	pi[v]=u;
	d[v]=w[u][v];
      }
    }
  }
  
  for(i=0;i<n;i++){
    num+=d[i];
  }
  return num;
}
int main(){
  int n;
  int a[N][N];
  int num;
  int i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("%d\n",prim(n,a,0));
  return 0;
}


