#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool jud[101];
int mat[101][101];
int mincost[101];
int max;
int sum=0;


int prim();
void printall(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
bool judch()
{
    for (int i = 1; i <= max; i++)
    {
        if (!jud[i])
            return true;
    }
    return false;
}


int main()
{
    int n;

    scanf("%d", &n);
    max = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &mat[i][j]);
            if(mat[i][j]==-1)
                mat[i][j]=__INT_MAX__;
        }
    }

    //printall(n);


    printf("%d\n",prim());

    return 0;
}

int prim(){
    int v,u;
    int ret=0;
    for(int i=1;i<=max;i++){
        mincost[i]=__INT_MAX__;
        jud[i]=false;
    }
    mincost[1]=0;
    while(true){
        v=-1;
        for(u=1;u<=max;u++){
            if(!jud[u]&&(v==-1||mincost[u]<mincost[v]))
                v=u;
        }
        if(v==-1)
            break;
            jud[v]=true;
            ret+=mincost[v];
            for(u=1;u<=max;u++){
                mincost[u]=mincost[u]<mat[v][u]?mincost[u]:mat[v][u];
            }
    }
    return ret;
}
