#include <stdio.h>
int main(void){
    // Here your code !
    int a[100][100] = {0},b[100][100] = {0},c[100][100] = {0};
    int n,m,l;
    int i,j,k;
    
    scanf("%d%d%d",&n,&m,&l);
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i < m;i++){
        for(j = 0;j < l;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i = 0;i < n;i++){
        for(j = 0;j < l;j++){
            for(k = 0;k < m;k++){
                c[i][j] += a[i][k]*b[k][j];
                if(k == m-1){
                    printf("%d",c[i][j]);
                    if(j == l-1){
                        puts("");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
        }
    }
    return 0;
}