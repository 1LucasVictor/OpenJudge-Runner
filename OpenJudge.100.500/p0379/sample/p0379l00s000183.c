#include <stdio.h>

int main(){
    
    int n, m, i, j, x;
    int b[1000], a[1000][1000];
    
    scanf("%d %d", &n, &m);
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    
    for (i = 0; i < n; i++) {
        x=0;
        for(j = 0; j < m; j++){
            x += a[i][j] * b[j];
        }
        printf("%d\n", x);
    }
    
return 0;
}