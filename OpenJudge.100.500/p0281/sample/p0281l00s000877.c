#include<stdio.h>
#define N 100
#define INFINITY 2000000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

void dijkstra(void);

int n,G[N][N];

int main(){
    
 int i,j,k,c,u,v;
 
 scanf("%d",&n);
 for(i=0;i<n;i++){
     for(j=0;j<n;j++){
         G[i][j]=INFINITY;
         
     }
 }
 
 for(i=0;i<n;i++){
     scanf("%d%d",&u,&k);
     for(j=0;j<k;j++){
         scanf("%d%d",&v,&c);
         G[u][v]=c;
     }
 }
 
  dijkstra();

  return 0;
  
}

void dijkstra(){
    int i,j,u,v;
  int minv;
  int d[N],color[N];

  for(i=0;i<n;i++){
    d[i]=INFINITY;
    color[i]=WHITE;
    
  }
  d[0]=0;
  color[0]=GRAY;
  while(1){
      minv=INFINITY;
      u=-1;
      for(i=0;i<n;i++){
          if(minv>d[i] && color[i] != BLACK){
              u=i;
              minv=d[i];
              
          }
          
      }
      if(u==-1) break;
  color[u]=BLACK;
  for(v=0;v<n;v++){
      if(color[v]!=BLACK && G[u][v] != INFINITY){
          if(d[v]>d[u] + G[u][v]){
              d[v] = d[u] + G[u][v];
              color[v]=GRAY;
              
          }
          
      }
      
  }
  }//while
  
  for(i=0;i<n;i++){
      if(d[i]==INFINITY) d[i]=-1;
      printf("%d %d\n",i,d[i]);
      
  }
  
  
}
