#include <stdio.h>

#define MAX 200000
#define NIL -1
#define WHITE 0
#define BLACK 1

int prim(int,int(*)[],int[],int[],int[]);

int main() {
    int i,j,n,ans;
    
    scanf("%d",&n);
    int a[n][n],d[n],pi[n],color[n];
    
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) scanf("%d",&a[i][j]);
    }
    
    ans = prim(n,a,d,pi,color);
    
    printf("%d\n",ans);
    
    return 0;
}


int prim(int n,int a[n][n],int d[n],int pi[n],int color[n]) {
    int i,j,u,ans=0;
    int mincost;
    
    for(u=0; u<n; u++) {
        d[u] = MAX;
        pi[u] = NIL;
        color[u] = WHITE;
    }
    
    d[0] = 0;
    pi[0] = NIL;
    
    while(1) {
        mincost = MAX;
        
        for(i=0; i<n; i++) {
            if(color[i]!=BLACK && d[i]<mincost) {
                mincost = d[i];
                u = i;
            }
        }
        
        if(mincost==MAX) break;
        
        color[u] = BLACK;
        
        for(j=0; j<n; j++) {
            if(color[j]!=BLACK && a[u][j]<d[j] && a[u][j]!=NIL) {
                pi[j] = u;
                d[j] = a[u][j];
            }
        }
    }
    
    for(i=0; i<n; i++) ans += d[i];
    
    return ans;
}