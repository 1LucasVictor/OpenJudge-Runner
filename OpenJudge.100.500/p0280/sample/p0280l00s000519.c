#include<stdio.h>
 
#define MAX 100

#define INF (1<<21)

int prim();

int n,G[MAX][MAX];
 
int main(){
 
  int i,j,e,p;
 
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      G[i][j]=(e==-1)?INF:e;
    }
  }
   
  p=prim();
  printf("%d\n",p);
 
  return 0;
}
 
int prim(){
 
  int u,i,v,minv,sum=0;
  int d[MAX];
  int p[MAX];
  int color[MAX];
 
  for(i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=0;
  }
 
  d[0]=0;
  
  while(1){
    minv=INF;
    u=-1;
     
    for(i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=2){
         u=i;
         minv=d[i];
      }
    }
     
    if(u==-1)break;
    color[u]=2;
     
    for(v=0;v<n;v++){
      if(color[v]!=2&&G[u][v]!=INF){
    if(d[v]>G[u][v]){
      d[v]=G[u][v];
      p[v]=u;
      color[v]=1;
    }
      }
    }
  }
  
  for(i=0;i<n;i++){
    if(p[i]!=-1)sum+=G[i][p[i]];
  }
 
  return sum;
}