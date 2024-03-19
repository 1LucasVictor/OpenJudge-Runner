#include <stdio.h>
#define INF 1000000

int main(){
  int n,color[100],Mat[100][100],dis[100];
  int u,k,v,c,min;
  int i,j;
  
  scanf("%d",&n);
  //?????????
  for(i=0;i<n;i++)
    {
      dis[i]=INF;
      color[i]=0;
    }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      Mat[i][j]=INF;
    }
  }
  //??\???
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      Mat[u][v]=c;
    }
  }
  
  color[0]=1;
  dis[0]=0;

  //??????
  while(1){
    min=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(min>dis[i]&&color[i]!=2){
	u=i;
	min=dis[i];
      }
    }
    
    if(u==-1)break;
    
    color[u]=2;
    
    for(v=0;v<n;v++){
      if(color[v]!=2&&Mat[u][v]!=INF){
	if(dis[v]>dis[u]+Mat[u][v]){
	  dis[v]=dis[u]+Mat[u][v];
	  color[v]=1;
	}
      }
    }
    
  }
  //??????
  for(i=0;i<n;i++){
    printf("%d ",i);
    printf("%d\n",dis[i]);
  }
  return 0;
}