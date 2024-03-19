#include<stdio.h>
int main(void)
{
    int n,m,l,a[105][105],b[105][105],c[105][105]={0};
    int i,j,k;
    scanf("%d %d %d",&n,&m,&l);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=l;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=l;j++){
            for(k=1;k<=l+m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d",c[i][j]);
            if(j<l)printf(" ");
        }
        printf("\n");
    }



    return 0;
}