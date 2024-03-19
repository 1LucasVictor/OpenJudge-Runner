#include<stdio.h>

int main(){
    int k,u,l,n,m,i,j;
    int a[101][101];
    int b[101][101];
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d", &u);
        a[i][1]=u;
        scanf(" %d", &k);
        a[i][2]=k;
        for(j=3; j<=k+2; j++){
            scanf(" %d", &a[i][j]);
            b[i][a[i][j]] = 1;
        }
    }

    for(l=1; l<=n; l++){
        for(m=1; m<=n; m++){
            printf("%d",b[l][m]);
            if(m != n) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
