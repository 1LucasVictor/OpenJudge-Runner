#include<stdio.h>

int main(void){
        int i,j,m,n,a[101][101]={},b[101]={},c[101]={};

        scanf("%d %d",&m,&n);

        for(i=1; i<=m; i++)
                for(j=1; j<=n; j++)
                        scanf(" %d",&a[i][j]);

        for(i=1; i<=n; i++)
                scanf(" %d",&b[i]);

        for(i=1; i<=m; i++)
                for(j=1; j<=n; j++)
                        c[i] += a[i][j] * b[j];

        for(i=1; i<=m; i++)
                        printf("%d\n",c[i]);

        return 0;
}