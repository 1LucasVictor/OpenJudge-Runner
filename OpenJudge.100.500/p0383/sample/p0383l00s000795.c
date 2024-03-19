#include<stdio.h>
#include<math.h>
int main(void){
    int a[100][100]={}, b[100][100]={}, c[100][100]={};
    int i, j, k, n, m, l;
    
    scanf("%d %d %d", &n, &m, &l);
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(j=1; j<=m; j++){
        for(k=1; k<=l; k++){
            scanf("%d", &b[j][k]);
        }
    }
    
    for(i=1; i<=n; i++){
        for(k=1; k<=l; k++){
            for(j=1; j<=m; j++){
                c[i][k]+=a[i][j]*b[j][k];
            }
            printf("%d", c[i][k]);
            if(k!=l) printf(" ");
        }
        printf("\n");
    }
    
}
