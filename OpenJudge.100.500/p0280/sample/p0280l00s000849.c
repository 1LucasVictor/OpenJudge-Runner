#include<stdio.h>
#define NIL NULL
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 10000
int n,M[1000][1000];

int prim(){
    int d[100],pi[100],color[100];
    int sum=0,i,v,u=0,minv;
    for(i=0;i<n;i++){
        d[i]=INF;
        pi[i]=-1;
        color[i]=WHITE;
    }
    d[0]=0;
    while(1){
        minv=INF;
        u=-1;
        for(i=0;i<n;i++){
            if(minv>d[i]&&color[i]!=BLACK){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1){
        break;
        }
        color[u]=BLACK;
        for(v=0;v<n;v++){
            if(color[v]!=BLACK&&M[u][v]!=INF){
                if(d[v]>M[u][v]){
                    pi[v]=u;
                    d[v]=M[u][v];
                    color[v]=GRAY;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        if(pi[i]!=-1){
            sum+=M[i][pi[i]];
        }
    }
    return sum;
}

int main(){
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&M[i][j]);
            if(M[i][j]==-1){
                M[i][j]=INF;
            }
        }
    }
    printf("%d\n",prim());
    return 0;
}

