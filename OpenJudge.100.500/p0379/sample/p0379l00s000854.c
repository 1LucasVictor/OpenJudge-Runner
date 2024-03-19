#include <stdio.h>
int main(void){
    int n, m, i, j, x;
    scanf("%d %d", &n, &m);
    
    int a[100][100]={{0}}, b[100]={0}, c[100]={0};
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d ", &x);
            a[i][j] = x;
        }
    }
    
    for(i=0; i<m; i++){
        scanf("%d\n", &x);
        b[i] = x;
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            c[i] = c[i] + a[i][j]*b[j];
        }
    }
    for(i=0; i<n; i++){
        printf("%d\n", c[i]);
    }
    return 0;
}
