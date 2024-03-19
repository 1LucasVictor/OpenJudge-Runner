#include<stdio.h>
int main(void)
{
    int n,m,l,a[102][102],b[102][102],c[102][102]={0};
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
            for(k=1;k<=l+10;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d",c[i][j]);
            if(j<l)printf(" ");
        }
        printf("\n");
    }



    return 0;
}