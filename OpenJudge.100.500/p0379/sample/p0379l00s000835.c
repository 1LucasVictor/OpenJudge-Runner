#include<stdio.h>
int main(){
    int n,m,b[100],a[100][100],i,k,sum[100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(k=0;k<m;k++){
            scanf("%d",&a[i][k]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        for(k=0;k<m;k++){
            sum[i] += a[i][k] * b[k];
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",sum[i]);
    }
    return 0;
}
