#include <stdio.h>
#define N 1000
 int main(){
   int n,i,j,u,k,v,mincost;
    int d[N],color[N],G[N][N];
     
    scanf("%d",&n);
     
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            G[i][j]=N;
        }
    }
     
    for(i=0;i<n;i++){
        d[i]=N;
        color[i]=0;
        scanf("%d %d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d",&v);
            scanf("%d",&G[u][v]);
        }
    }
    d[0]=0;
     
    while(1){
        mincost=N;
        for(i=0;i<n;i++){
            if(d[i]<mincost && color[i]==0){
                mincost=d[i];
                u=i;
            }
        }
         
        if(mincost==N)break;
        color[u]=1;
         
	 for(v=0;v<n;v++){
            if(d[v]>d[u]+G[u][v]){
                d[v]=d[u]+G[u][v];
            }
        }
    }
    for(i = 0;i < n; i++){
        printf("%d %d\n", i, d[i]);
    }
    return 0;
}