#include <stdio.h>
#define SUM(a,b) a+b

int main(void){
    int n,m,l,i,j,k;
    scanf("%d %d %d",&n,&m,&l);
    long int buf=0, mat_a[n][m], mat_b[m][l], ans[n][l];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) scanf("%ld",&mat_a[i][j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++) scanf("%ld",&mat_b[i][j]);
    }

    for (i=0;i<n;i++){
        for (j=0;j<l;j++,buf=0){
            for (k=0;k<m;k++) buf=SUM(buf,mat_a[i][k]*mat_b[k][j]);
            ans[i][j] = buf;
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<l;j++){
            printf("%d",ans[i][j]);
            if (j<l-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
