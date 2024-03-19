#include<stdio.h>
#define L 100
#define INF 1<<21
int G[L][L], n, labels[L], d[L], p[L];
 
int min(int a, int b){
    return (a>=b) ? b: a;
}
 
 
void dijkstra(int s) {
    int i;
    for(i=0; i<n; i++) {
    d[i]=INF;
    labels[i]=0;
    }
    d[s]=0;
    while (1){
    int u,v=-1;
    for(u=0; u<n; u++){
        if(labels[u]==0 && (v == -1 || d[u] < d[v])) v=u;
    }
    if (v==-1) break;
    labels[v]=1;
    for(u=0; u<n; u++){
        if(labels[u]!=1) d[u] = min(d[u], d[v]+G[v][u]);
    }
    }
 
}
 
int main(){
    int i,j,k,v,c,u;
    scanf("%d",&n);
 
    for(i=0;i<n; i++){
    for(j=0;j<n;j++){
        G[i][j]=INF;
    }
    }
     
    for(i=0;i<n;i++){
    scanf("%d %d",&u, &k);
    for(j=0;j<k;j++){
        scanf("%d %d",&v, &c);
        G[u][v]=c;
    }
    }
     
    dijkstra(0);
    for(i=0;i<n;i++){
    printf("%d %d\n",i, d[i]);
    }
 
    return 0;
  }

