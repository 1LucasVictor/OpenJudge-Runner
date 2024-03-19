#include <stdio.h>

#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 100000

int prim(void);
int A[N][N],n;

int main()
{
    int i,j;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
            if(A[i][j] == -1) A[i][j] = INFTY;
            else;
        }
    }
    printf("%d\n", prim());
    
    return 0;
}

int prim()
{
    int i,u,v,minv,sum=0;
    int d[N],p[N],color[N];
    
    for(i=0;i<n;i++){
        d[i] = INFTY;
        p[i] = -1;
        color[i] = WHITE;
    }
    d[0] = 0;
    
    while(1){
        minv = INFTY;
        u = -1;
        for(i=0;i<n;i++){
            if(minv > d[i] && color[i] != BLACK){
                u = i;
                minv = d[i];
            }
        }
        if(u == -1) break;
        color[u] = BLACK;
        for(v=0;v<n;v++){
            if(color[v] != BLACK && A[u][v] != INFTY){
                if(d[v] > A[u][v]){
                    d[v] = A[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        if(p[i] != -1) sum += A[i][p[i]];
    }
    return sum;
}

