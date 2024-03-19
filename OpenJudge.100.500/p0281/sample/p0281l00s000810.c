#include<stdio.h>
#include<limits.h>
#define N 100
#define FIRST 0
#define SECOUND 1
#define THIRD 2

int n,M[N][N];

void dijkstra(){
    int minv;
    int d[N],p[N];
    int i;

    for(i=0;i<n;i++){
        d[i]=INT_MAX;
        p[i]=FIRST;
    }
    
    d[0]=0;
    p[0]=SECOUND;
    
    while(1){
        minv=INT_MAX;
        int u= -1;
        for(int i=0;i<n;i++){
            if(minv> d[i] && p[i] != THIRD){
                u=i;
                minv=d[i];
            }
        }
        
        if(u==-1)break;
        p[u]=THIRD;
        
        for(int v=0;v<n;v++){
            if(p[v]!=THIRD && M[u][v]!=INT_MAX){
                if(d[v]>d[u]+M[u][v]){
                    d[v]=d[u]+M[u][v];
                    p[v]=SECOUND;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d %d\n",i,d[i]==INT_MAX ? -1 : d[i]);
    }
}

int main(){
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            M[i][j]=INT_MAX;
        }  
    }

    int k,c,u,v;
    
    for(int i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        for(int j=0;j<k;j++){
            scanf("%d%d",&v,&c);
            M[u][v]=c;
        }
    }

    dijkstra();

    return 0;
}
