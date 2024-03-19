#include <stdio.h>
int main(void)
{
    int G[101],queue[101],input=1,output=1,i,j,k,n,u,v;
    scanf("%d", &n);
    G[1]=0;
    for(i=2;i<=n;i++) G[i] = -1;
    for(i=1;i<=n;i++){
        scanf("%d", &u);
        scanf("%d", &k);
        for(j=0;j<k;j++){
            scanf("%d", &v);
            queue[input%101] =v;
            input++;
        }
        for(j=0;j<k;j++){
            if(G[u]!=-1){
                if(G[queue[output%101]]!=-1){
                    if(G[u]+1<G[queue[output%101]]){
                        G[queue[output%101]]=G[u]+1;
                    }
                } else {
                    G[queue[output%101]]=G[u]+1;
                }
            }
            output++;
        }
    }
    for(i=1;i<=n;i++) printf("%d %d\n", i, G[i]);
    return 0;
}