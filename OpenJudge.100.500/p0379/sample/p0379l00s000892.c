#include <stdio.h>
int main(void){
    int n,m;
    scanf("%d %d\n",&n,&m);
    int a[n-1][m-1],b[m-1],ans[n];
    int i,j;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            scanf("%d ",&a[i][j]);  
        }
    }
    for(j=0;j<=m-1;j++){
        scanf("%d ",&b[j]);
    }
    for(i=0;i<=n-1;i++){
        ans[i]=0;
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            ans[i]=ans[i]+a[i][j]*b[j];  
        }
    }
    for(i=0;i<=n-1;i++){
        printf("%d\n",ans[i]);
    }
    printf("\n");
    return 0;
}