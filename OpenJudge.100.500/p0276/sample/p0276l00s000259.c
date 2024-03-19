#include <stdio.h>

int main(void){
    int n,i,j,u,k,l;
    int a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j] = 0;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d",&u);
        scanf("%d",&k);
        for(j=0;j<k;j++){
            scanf("%d",&l);
            a[u-1][l-1] = 1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
            if(j!=n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
}
