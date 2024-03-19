#include<stdio.h>
#define N 10000
#define INF 10000
#define NIL NULL
#define W 0
#define B 2
#define G 1
int prim(int );
int A[N][N];

int main(){
    int a,i,j;

    scanf("%d",&a);
    for(i = 0;i < a;i++){
        for(j = 0;j < a;j++){
            scanf("%d",&A[i][j]);
            if(A[i][j] == -1)A[i][j] = INF;
        }
    }
    printf("%d\n",prim(a));
    return 0;
}

int prim(int a){
    int i,v,u = 0,min,d[100],p[100],color[100],n = 0;

    for(i = 0;i < a;i++){
        d[i] = INF;
        p[i] = -1;
        color[i] = W;
    }
    d[0] = 0;
    while(1){
        min = INF;
        u = -1;
        for(i = 0;i < a;i++){
            if(min > d[i] && color[i] != B){
                u = i;
                min = d[i];
            }
        }
        if(u == -1)break;
        color[u] = B;
        for(v = 0;v < a;v++){
            if(color[v]!= B && A[u][v] != INF){
                if(d[v] > A[u][v]){
                    p[v] = u;
                    d[v] = A[u][v];
                    color[v] = G;
                }
            }
        }
    }
    for(i = 0;i < a;i++){
        if(p[i] != -1){
            n += A[i][p[i]];
        }
    }
    return n;
}
