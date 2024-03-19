#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[101][101], b[101][101];
    long c[101][101]={0};
    int n, m, l, i, j, k;
    
    scanf("%d%d%d", &n, &m, &l);
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0; i<m; i++){
        for(j=0; j<l; j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i=0; i<n; i++){
        for(k=0; k<m; k++){
            for(j=0; j<l; j++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<l; j++){
            printf("%ld", c[i][j]);
            
            if(l-1 == j){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}