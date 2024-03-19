#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



int main(){
    int n;
    scanf("%d",&n);
    int a[n+1][n+1];
    int i,j;
    for(i=1;i<=n;i++)for(j=1;j<=n;j++)a[i][j]=0;
    for(i=1;i<=n;i++){
        int q,k;
        scanf("%d %d",&q,&k);
        for(j=1;j<=k;j++) {
            int p;
            scanf("%d",&p);
            a[q][p]=1;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)printf("%d ",a[i][j]);
        printf("\n");
    }
    
    return 0;
}