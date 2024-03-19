#include <stdio.h>
 
#define N 101
#define INFTY 200000
#define WHITE 0
#define GRAY 1
#define BLACK 2
 

 
int main(){
    int k,c,u,v,n,M[N][N], minv, d[N],color[N] ,m,l,p,i,j;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            M[i][j] = INFTY;
        }
    }
     
    for(i=0; i<n; i++){
        scanf("%d%d",&u,&k);
        for(j=0; j<k; j++){
            scanf("%d%d",&v,&c);
            M[u][v] = c;
        }
    }
     
;
     for(m=0; m<n; m++){
        d[m] = INFTY;
        color[m] = WHITE;
    }
    d[0] = 0;
    color[0] = GRAY;
    while(1){
        minv = INFTY;
        l=-1;
        for(m=0; m<n; m++) {
            if(minv > d[m] && color[m] != BLACK){
                l = m;
                minv = d[m];
            }
        }
        if(l==-1) break;
        color[l] = BLACK;
        for(p=0; p<n; p++){
            if(color[p] != BLACK && M[l][p] != INFTY){
                if(d[p] > d[l] + M[l][p]) {
                    d[p] = d[l] + M[l][p];
                    color[p] = GRAY;
                }
            }
        }
    }
    for(m=0; m<n; m++){
        printf("%d %d\n",m,d[m]);
    } 
     
    return 0;
}
 

