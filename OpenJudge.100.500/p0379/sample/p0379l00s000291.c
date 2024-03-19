#include <stdio.h>

int main(void){
    int n,m;
    int i,j=0;


    scanf("%d",&n);
    scanf("%d",&m);

    int a[n+1][m+1];
    int b[m+1];
    int c[n+1];

    for(i=1;i<=n;i++){
        c[i]=0;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(j=1;j<=m;j++){
        scanf("%d",&b[j]);
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            c[i]=c[i]+a[i][j]*b[j];
        }
        printf("%d\n",c[i]);
    }


    return 0;
}
