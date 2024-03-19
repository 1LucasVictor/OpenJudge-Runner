#include<stdio.h>
int prim();
int g[101][101],n;

int main(){
    int i,j,cur=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&g[i][j]);
            if(g[i][j]==-1) g[i][j]=2001;
        }
    }
    printf("%d\n",prim());
    return 0;
}
int prim(){
    int i,v,u,minv,d[101],p[101],flag[101];
    for(i=0;i<n;i++){
        d[i]=2001;
        p[i]=-1;
        flag[i]=0;
    }
    d[0]=0;
    while(1){
        minv=2001;
        u=-1;
        for(i=0;i<n;i++){
            if(minv>d[i] && flag[i]!=1){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1) break;
        flag[u]=1;
        for(v=0;v<n;v++){
            if(flag[v]!=1 && g[u][v]!=2001){
                if(d[v]>g[u][v]){
                    d[v]=g[u][v];
                    p[v]=u;
                    flag[v]=2;
                }
            }
        }
    }
    int sum=0;
    for(i=0;i<n;i++){
        if(p[i]!=-1) sum+=g[i][p[i]];
    }
    return sum;
}
