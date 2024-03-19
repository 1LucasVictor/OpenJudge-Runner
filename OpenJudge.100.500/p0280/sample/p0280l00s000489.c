#include <stdio.h>
#define MAX 100
#define INF 1000000
#define NIL -1
   
int n;
int d[MAX],w[MAX][MAX],pi[MAX];
   
void prime() {
  
  int u,v,i,j,color[MAX],min;
   
  for(u=0;u<n;u++){
    d[u]=INF;
    pi[u]=NIL;
    color[u]=0;
  }
   
  d[0]=0;
   
  for(i=0;i<n;i++) {
     
    min = INF;
    for (j=0;j<n;j++){
      if(color[j]==1)
    continue;
       
      if(d[j]<=min){
    u=j;
    min=d[j];
      }
    }
     
    for(v=0;v<n;v++){
      if(w[u][v]==-1){
     continue;
      }
      if(color[v]==1){
    continue;
      }
       
      if(w[u][v] < d[v]){
    pi[v]=u;
    d[v]=w[u][v];
      }
    }
    color[u]=1;
  }
}
 
main() {
  int i,j,sum=0;
  scanf("%d",&n);
   
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&w[i][j]);
    }
  }
   
  prime();
  for(i=0;i<n;i++)
    sum+=d[i];
   
  printf("%d\n",sum);
   
  return 0;
}