#include<stdio.h>
#include<stdlib.h>

#define N 100
#define inf 100000

void dijkstra(int);
void initializeSingleSource(int);

int w[N][N], d[N], pi[N],n,k, s, c[N];

int main(){

  int i,j, v;

  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      w[i][j] = inf;
    }}


  for(i=0;i<n;i++){

    scanf("%d %d",&s,&k);

    for(j=0;j<k;j++){

      scanf("%d ",&v);
      scanf("%d",&w[s][v]);
    } 
  }

   dijkstra(s);

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  return 0;
}

void dijkstra(int s){

  int mincost, i;
  int u, v;

  initializeSingleSource(s);
  // fprintf(stderr,"error\n");
  /* for(i=0;i<n;i++)
     printf("%d\n",d[i]);*/

  while(1){
    mincost = inf;
    
    for(i=0;i<n; i++){

      if(c[i] != 2 && d[i] < mincost){
	mincost = d[i];
	u = i;
      }}
    if(mincost == inf)break;

    c[u] = 2;

    for(v = 0;v<n;v++){
      //	printf(" %d n %d %d\n",w[u][v],d[v],v);
      if(c[v] != 2 && d[u] + w[u][v]< d[v]){
	//	pi[v] = u;
	d[v] =  w[u][v]+d[u];	
      }
    }
  }
}

void initializeSingleSource(int s){

  int v;

  for(v=0;v<n;v++){

    d[v] = inf;
    c[v] = 0;
    pi[v] = 0;
  }
  d[0] = 0;
}