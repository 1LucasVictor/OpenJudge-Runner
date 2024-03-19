#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int a[n][m],b[m],c[n];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
        c[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i]+=a[i][j]*b[j];
        }
        printf("%d\n",c[i]);
    }
}
