#include <stdio.h>

int main(void)
{
    int a[100][100];
    int b[1000];
    int n, m;
    int sum;
    int i, j;
    
    scanf("%d %d", &n, &m);
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    
    for(i=0; i<n; i++){
        sum = 0;
        for(j=0; j<m; j++){
            sum += a[i][j]*b[j];
        }
        printf("%d\n", sum);
    }
    
    return 0;
}