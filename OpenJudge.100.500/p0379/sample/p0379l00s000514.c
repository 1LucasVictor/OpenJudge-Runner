#include<stdio.h>
int main(){
    int a[1000][1000],b[1000],c[1000]={0},i,j,m,n;
    scanf("%d %d\n",&n,&m);
    for(i=1;i<=n;i+=1){
        for(j=1;j<=m;j+=1){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=1;j<=m;j+=1){
        scanf("%d",&b[j]);
    }
    for(i=1;i<=n;i+=1){
        for(j=1;j<=m;j+=1){
            c[i]=c[i]+a[i][j]*b[j];
        }
    }
    for(i=1;i<=n;i+=1){
        printf("%d\n",c[i]);
    }
    return 0;
}