#include <stdio.h>
#include <limits.h>
int n,M[100][100];
void dijkstra();
int main(){
  int i,j,w,id,id2,k;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)M[i][j]=INT_MAX;
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&id,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&id2,&w);
      M[id][id2]=w;
    }
  }
  dijkstra();
  return 0;
}

void dijkstra(){
  int i,u,mincost,d[100],C[100];
  for(i=0;i<n;i++){
    d[i]=INT_MAX;
    C[i]=0;
  }
  d[0]=0;
  while(1){
    mincost=INT_MAX;
    for(i=0;i<n;i++){
      if(C[i]!=2&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INT_MAX)break;
    C[u]=2;
    for(i=0;i<n;i++){
      if(C[i]!=2&&M[u][i]!=INT_MAX){
	if(d[u]+M[u][i]<d[i]){
	  d[i]=d[u]+M[u][i];
	  C[i]=1;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(d[i]==INT_MAX)d[i]=-1;
    printf("%d %d\n",i,d[i]);
  }
}

