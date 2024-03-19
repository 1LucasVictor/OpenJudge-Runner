#include<stdio.h>
int v[101][101];
int a[101][101];
int d[101];
int pi[101];
char color[101];
int n,mincost,sumcost=0;

void dijkstra(void);

int main(){
  int i,j,u,k,s;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d %d" ,&u,&k);      
  for(j=1;j<=k;j++){
     scanf("%d",&v[u][j]);
     scanf("%d",&a[u][v[u][j]]);
     /*printf("%d %d\n",v[u][j],a[u][v[u][j]]);*/
  }
  /* printf("%d\n",u);*/
  }
  /*for(i=0;i<n;i++){
   for(j=0;j<n;j++){
     printf("%d ",a[i][j]);
   } printf("\n");
  }*/

  dijkstra();

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
}

void dijkstra(void){
  int i,j,u;
  for(i=0;i<n;i++){
    d[i]=2001;
    pi[i] = -1;
    color[i]='W';
  }
  d[0]=0;
  while(1){
    mincost = 2000000;
    for(i=0;i<n;i++){
      if(color[i]!='B' && d[i] < mincost){
	mincost = d[i];
        u = i;
      }
    }
    if(mincost==2000000) break;
    color[u]='B';
  
  for(i=0;i<n;i++){
    if(color[i]!='B' && a[u][i]!=0  && d[u]+a[u][i]<d[i]){
      pi[i] = u;
      d[i]=d[u]+a[u][i];
     }
  }
  }
}