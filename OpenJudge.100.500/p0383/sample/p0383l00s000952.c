#include <stdio.h>

int main(void){
    int n,m,l;
    int i,j,k;
    scanf("%d %d %d\n",&n,&m,&l);
    int a[n][m];
    int b[m][l];
    int c[n][l];
    //n*m??????A???????????????
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    //m*l??????b???????????????
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d ",&b[i][j]);
        }
    }
    //n*l??????c????±???????
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            c[i][j]=0;
            for(k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    ///n*l???????????¨???
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%d",c[i][j]);
            if(j<l-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0; /*0?????????*/
}