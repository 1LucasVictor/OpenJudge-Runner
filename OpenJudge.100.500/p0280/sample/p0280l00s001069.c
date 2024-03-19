#include <stdio.h>
#define INF 200000
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX 100
int n;
int color[MAX];
int M[MAX][MAX];
int d[MAX];
int p[MAX];
int prim(){
        int u,Minv;
        int i,v;
        int sum=0;
        for(i=0; i<n; i++) {
                color[i]=WHITE;
                d[i]=INF;
                p[i]=-1;

        }
        d[0]=0;
        while(1) {
                Minv=INF;
                for(i=0; i<n; i++) {
                        if(color[i]!=BLACK &&d[i]<Minv) {
                                Minv=d[i];
                                u=i;
                        }
                }

                if(Minv==INF) {
                        break;
                }
                color[u]=BLACK;
                for(v=0; v<n; v++) {
                        if(color[v]!=BLACK && M[u][v]!=INF) {
                                if(M[u][v]<d[v]) {
                                        d[v]=M[u][v];
                                        p[v]=u;
                                        color[v]=GRAY;
                                }
                        }
                }
        }
        for(i=0; i<n; i++) {
                if(p[i]!=-1) {
                        sum+=M[i][p[i]];
                }
        }

        return sum;

}
int main(){
        int i,j;

        scanf ("%d",&n);
        for(i=0; i<n; i++) {
                for(j=0; j<n; j++) {
                        scanf("%d",&M[i][j]);
                        if(M[i][j]==-1) {
                                M[i][j]=INF;
                        }
                }
        }


        printf("%d\n",prim());

        return 0;
}