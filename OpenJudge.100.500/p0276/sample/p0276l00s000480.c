#include <stdio.h>
#define N 100

int main(void){
    int M[N][N]={0};
    int n,u,k,v,i,o;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&u,&k);
        u--;
        for(o=0;o<k;o++){
            scanf("%d",&v);
            v--;
            M[u][v]=1;
        }
    }
    for(i=0;i<n;i++){
        for(o=0;o<n;o++){
            printf("%d%s",M[i][o],o==n-1?"":" ");
        }
        puts("");
    }
    return 0;
}