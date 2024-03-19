#include<stdio.h>
#define INF 1000000000
int cost[101][101];
int d[101];
int flag[101];
int n;

int main(){
    int i,j;
    int u,k,v,c;
    scanf("%d",&n);

    for(i=0;i<n;i++) d[i] = INF;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) cost[i][j] = INF;

    for(i=0;i<n;i++){
        scanf("%d%d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d%d",&v,&c);
            cost[u][v] = c;
        }
    }
    d[0] = 0;
    while(1){
        int v = -1;
        for(i=0;i<n;i++){
            if(flag[i]==0 && (v==-1 || d[i] < d[v])){
                v = i;
            }
        }
        if(v == -1) break;
        flag[v] = 1;
        for(i=0;i<n;i++){
            int tmp = d[v]+cost[v][i];
            d[i] = d[i] < tmp ? d[i] : tmp;
        }
    }

    for(i=0;i<n;i++){
        printf("%d %d\n",i,d[i]);
    }

    return 0;
}

