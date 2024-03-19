#include<stdio.h>

int main(void){
        int i,j,k,n,m,l,a[101][101]={},b[101][101]={};
        long long int c[101][101]={};

        scanf("%d %d %d",&n,&m,&l);

        for(i=1; i<=n; i++)
                for(j=1; j<=m; j++)
                        scanf(" %d",&a[i][j]);

        for(i=1; i<=m; i++)
                for(j=1; j<=l; j++)
                        scanf(" %d",&b[i][j]);

        for(i=1; i<=n; i++){
                for(j=1; j<=l; j++){
                        for(k=1; k<=m; k++)
                                c[i][j] += a[i][k] * b[k][j];
                        printf("%lld",c[i][j]);
                        if(j != l) putchar(' ');
                }
                putchar('\n');
        }
        return 0;

}