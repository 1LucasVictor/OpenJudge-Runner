#include<stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX 101
#define INF 1<<30

 int M[MAX][MAX],color[MAX],G[MAX],n,P[MAX];


int dijkstra(){
        int min,u,v,i;
        for(i=0;i<n;i++){
                     color[i]=WHITE;
                     G[i]=INF;
                     P[i]=0;
                     }

        G[0]=0;
        min=INF;

       while(1){
              min=INF;
              u=-1;
              for(i=0;i<n;i++){
                         if(color[i]!=BLACK && min>G[i]){
                                          min=G[i];
                                          u=i;
                                          }
                         }
              if(u==-1)break;
              color[u]=BLACK;
              for(v=0;v<n;v++){
                         if(color[v]!=BLACK && M[u][v]!=INF){
                                       if(G[v]>G[u]+M[u][v]){
                                                   G[v]=G[u]+M[u][v];
                                                   color[v]=GRAY;
                                                   }
                                       }
                          }
              }
      for(i=0;i<n;i++){
                   printf("%d %d\n",i,G[i]==INF?-1:G[i]);
                   }
      }
              


int main(){
        int i,j,v,c,u,k;
        scanf("%d",&n);
        for(i=0;i<n;i++){
                   for(j=0;j<n;j++){M[i][j]=INF;}
                   }
        
        for(i=0;i<n;i++){
                   scanf("%d%d",&u,&k);
                   for(j=0;j<k;j++){
                              scanf("%d%d",&v,&c);
                              M[u][v]=c;
                              }
                   }
        dijkstra();
        return 0;
        }
