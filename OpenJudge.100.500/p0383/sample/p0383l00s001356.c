#include<stdio.h>
int main(void){
    int m, n, l, i, j, k;
    scanf("%d %d %d", &n, &m, &l);//????????????????¨?//
    int a[n][m], b[m][l], c[n][l];
    for(i=0 ; i<n; i++){
        for(j=0 ; j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0 ; i<m; i++){
        for(j=0 ; j<l;j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0 ;i<n ;i++){
        
        for(j=0; j<l; j++){
            
            c[i][j] = 0;
            
        }
        
    }
    for(i=0; i<n; i++ ){
        for(k=0 ;k<l ;k++){
            for(j=0 ;j<m ;j++){
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }
    for(k=0 ; k<n ;k++ ){
        for(j=0 ;j<l ;j++){
            printf("%d", c[k][j]);
            if(j == l-1){
                printf("\n");
            }else printf(" ");
        }
    }
    return 0;
}