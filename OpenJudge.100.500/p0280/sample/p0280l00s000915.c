#include <stdio.h>
#define N 100
#define INFTY 100000000
#define Free 0
#define Full 1


int n, M[N][N];

int prim(){
    int u,minv;
    int d[N],p[N],color[N];
    
    for(int i=0; i<n; i++){
        d[i]=INFTY;
        p[i]=-1;
        color[i]=Free;
    }
    
    d[0]=0;
    
    while (1) {
        minv=INFTY;
        u=-1;
        for(int i=0; i<n; i++){
            if(minv>d[i] && color[i] != Full){
                u=i;
                minv=d[i];
            }
        }
        
        if(u==-1) break;
        color[u]=Full;
        for(int v=0; v<n; v++){
            if(color[v] != Full && M[u][v] != INFTY){
                if(d[v] > M[u][v]){
                    d[v]=M[u][v];
                    p[v]=u;
                    
          }
            }
        }
    }
    
    int sum =0;
    for(int i=0; i<n; i++){
        if(p[i] != -1) 
        sum+= M[i][p[i]];
    }
    return sum;
}

int main(){
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int e;
            scanf("%d",&e);
            if(e == EOF)
            M[i][j] = INFTY;
            else{
                M[i][j] = e;
            }
            
        }
    }
    printf("%d\n", prim());
    return 0;
}
