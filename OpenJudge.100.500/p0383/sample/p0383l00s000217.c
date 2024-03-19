#include <stdio.h>
int main(void){
    int n, m, l, a[101][101]={{0}}, b[101][101]={{0}}, c[101][101]={{0}}, i, j, k;
    
    scanf("%d %d %d\n", &n, &m, &l);
    
    for(i=0; i<n; i++){
        for(k=0; k<m; k++){
            scanf("%d", &a[i][k]);
        }
    }
    
    for(k=0; k<m; k++){
        for(j=0; j<l; j++){
            scanf("%d", &b[k][j]);
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<l; j++){
            for(k=0; k<m; k++){
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<l; j++){
            printf("%d", c[i][j]);
            if(j<l-1){
                printf(" ");
            }
        }
        printf("\n");
    }
            
    return 0;
}
