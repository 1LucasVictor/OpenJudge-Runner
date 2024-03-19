#include<stdio.h>
int main(void){
    int n;
    int m;
    int l;
    scanf("%d%d%d",&n,&m,&l);
    int a[n][m];
    int b[m][l];
    int c[n][l];
    int i;
    int j;
    int k;
    int d = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<l;k++){
                a[i][j] = 0;
                b[j][k] = 0;
                c[i][k] = 0;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++){
        for(k=0;k<l;k++){
            scanf("%d",&b[j][k]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            for(k=0;k<m;k++){
                d =a[i][k]*b[k][j];
                c[i][j]+=d;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%d",c[i][j]);
            if(j!=l-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}