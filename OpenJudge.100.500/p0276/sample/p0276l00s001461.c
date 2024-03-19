#include <stdio.h>
int main(){
        int n,p,u,k,v;
        int i,j;
        int M[100][100];

        scanf("%d",&n);
        for(i=0; i<n; i++) {
                for(j=0;j<n; j++) {
                        M[i][j]=0;
                }
        }
        for(i=0; i<n; i++) {
                scanf("%d%d",&u,&k);
                u--;
                for(j=0; j<k;j++) {
                        scanf("%d",&v);
                        v--;
                        M[u][v]=1;
                }
        }
        for(i=0; i<n; i++) {
                for(j=0;j<n; j++) {
                        printf(" %d",M[i][j]);
                }
                printf("\n");
        }
        return 0;
}