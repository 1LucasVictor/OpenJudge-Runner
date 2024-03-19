#include <stdio.h>
#define N 100000
#define inf 2000000
#define WHITE 1
#define BLACK 2 
void dij();

int n,u,e,v,c[100][N],d[N],pi[N],color[N];
int main(){
  int i,k,j;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      c[i][j]=inf;}}
  for(i=0;i<n;i++){
    scanf("%d%d",&e,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&c[i][v]);
    }
    
  }
  dij();
  
  for(i=0;i<n;i++)
    printf("%d %d\n",i,d[i]);

  return 0;
}

void dij(){
  int mincost,k,h,i,y;
  for(u=0;u<n;u++){
    d[u]=inf;
    pi[u]=-1;
    color[u]=0;
  }
  d[0]=0;

  while(1){
    mincost=inf;
    
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==inf){
      break;
    }
    color[u]=BLACK;
    for(k=0;k<n;k++){
      if(color[k]!=BLACK && d[u]+c[u][k]<d[k]){
	pi[k]=u;

       d[k]=d[u]+c[u][k];

      }
      
    }
   
  }
  
    
      
    
  }