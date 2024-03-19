#include<stdio.h>

#define N 100
#define INF 1000000

int n,d[N],pi[N],u,color[N],k,w[N][N];

void initializeSingleSource(){
  int v=0;
  for(v=0;v<n;v++){
    d[v]=INF;
    pi[v]=NULL;
    color[v]=1;
  }
  d[0]=0;
  
}

void dijkstra(){
  int mincost,i,v,sum=0,p;

  initializeSingleSource();

  for(p=0;p<n;p++){

    mincost=INF;

    for(i=0;i<n;i++){

      if(color[i]!=0 && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }

    for(v=0;v<n;v++){
      if( color[v]!=0 && d[u]+w[u][v]<d[v]){
	pi[v]=u;
	d[v]=w[u][v]+d[u];

      }
    }
    color[u]=0;

  }
}  

int main(){

  int i,j,a,s,c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){

      w[i][j]=N;
    }
  }

  for(i=0;i<n;i++){

    scanf("%d%d",&u,&k);

    for(j=0;j<k;j++){

      scanf("%d%d",&s,&c);

      w[u][s]=c;

    }
  }
  
  dijkstra();

  for(i=0;i<n;i++){

    printf("%d %d\n",i,d[i]);
  }
  
  return 0;
}