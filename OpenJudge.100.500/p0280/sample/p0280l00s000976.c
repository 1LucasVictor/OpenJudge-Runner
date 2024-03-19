#include<stdio.h>
#define MAX 101
#define INF 1<<30
#define WHITE 0
#define GRAY 1
#define BLACK 2

 int A[MAX][MAX],G[MAX],n,P[MAX];

 int prim(){
        int min,i,j,color[MAX],u,v;
        for(i=0;i<n;i++){color[i]=WHITE;}
        for(i=0;i<n;i++){G[i]=INF;}
        for(i=0;i<n;i++){P[i]=-1;}


        G[0]=0;

        while(1){
              min=INF;
              u=-1;
              for(i=0;i<n;i++){
                          if(min>G[i]&&color[i]!=BLACK){
                                             u=i;
                                             min=G[i];
                                             }
                          }
              if(u==-1)break;
              color[u]=BLACK;
              for(v=0;v<n;v++){
                          if(color[v]!=BLACK && A[u][v] != INF){
                                           if(G[v]>A[u][v]){
                                                     G[v]=A[u][v];
                                                     P[v]=u;
                                                     color[v]=GRAY;
                                                     }
                                           }
                         }
              }
        int sum=0;
        for(i=0;i<n;i++){
                   if(P[i]!=-1)sum+=A[i][P[i]];
                   }
        return sum;
        }


 int main(){
        int i,j,g;
        scanf("%d",&n);
        for(i=0;i<n;i++){
                   for(j=0;j<n;j++){
                               scanf("%d",&g);
                               A[i][j]=(g==-1)?INF:g;
                               }
                   }
        printf("%d\n",prim());
        return 0;
        }
        
