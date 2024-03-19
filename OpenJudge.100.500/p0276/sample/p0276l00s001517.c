#include <stdio.h>
#define M 100

int main(){
    int A[M][M];
    int n,i,j,u,t,x;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            A[i][j]=0;
        }
    }

    for(i=0;i<n;i++){
        scanf("%d%d",&u,&t);
        u--;
        for(j=0;j<t;j++){
            scanf("%d",&x);
            x--;
            A[u][x]=1;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            printf("%d ",A[i][j]);
        }
        printf("%d",A[i][j]);
        printf("\n");
    }
    return 0;
}
