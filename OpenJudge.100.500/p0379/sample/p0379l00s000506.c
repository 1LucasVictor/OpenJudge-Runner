#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a[101][101],b[101];
    int m,n,i,j,sum[101];
    
    scanf("%d %d", &n, &m);
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0; i<m; i++){
        scanf("%d",&b[i]);
    }
    
    for(i=0; i<n; i++){
        sum[i] = 0;
        for(j=0; j<m; j++){
            sum[i] += a[i][j]*b[j];
        }
        printf("%d\n",sum[i]);
    }
    
    return 0;
}

