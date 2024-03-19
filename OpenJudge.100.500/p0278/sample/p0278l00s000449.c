#include <stdio.h>
#include <string.h>
struct node{
    int v,s;//v点，到起点的?数 
}q[110]; 
int n,a[110][110],vis[110],head,tail,step[110];//step[]??各点?数 
void breadth(){
    int u,v;
    head=tail=1;
    vis[1]=1;//3 漏了?句 
    q[head].v=1;
    q[head].s=0;
    step[1]=0;
    tail++;
    while(head<tail){
        u=q[head].v;
        for(v=1;v<=n;v++)
            if(vis[v]==0&&a[u][v]){
                vis[v]=1;//2 漏了?句 
                q[tail].v=v;
                q[tail].s=q[head].s+1;//1 ?句写成  q[tail].s+=1;
                step[v]=q[tail].s;
                tail++;
            }
        head++;
    }
}
int main(){
    int u,k,v,i,j;
    memset(a,0,sizeof(a));
    memset(vis,0,sizeof(vis));
    memset(step,-1,sizeof(step));//3此?写成 memset(step,0,sizeof(step)); 即无路可?，需要?出-1，
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&u,&k);
        for(j=1;j<=k;j++){//4 此?写成 for(j=1;j<=n;j++) 大失水准，?句，?了10分?。 
            scanf("%d",&v);
            a[u][v]=1;
        }
    }
    breadth();
    for(i=1;i<=n;i++)
        printf("%d %d\n",i,step[i]);
    return 0;
}