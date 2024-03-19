#include <stdio.h>
int main(void){
    int n,m,i,j,a[100][100],b[100],c[100];
    for(i=0,scanf("%d%d",&n,&m);i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++){
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i]+=a[i][j]*b[j];
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",c[i]);
    }
}